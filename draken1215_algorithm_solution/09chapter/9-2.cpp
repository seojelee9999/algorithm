#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int apply(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
}

int main() {
    string s;
    cin >> s;

    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (isdigit(c)) {
            int num = 0;
            while (i < s.size() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            nums.push(num);
            i--; // 보정
        } else if (c == '(') {
            ops.push(c);
        } else if (c == ')') {
            while (!ops.empty() && ops.top() != '(') {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();
                char op = ops.top(); ops.pop();
                nums.push(apply(a, b, op));
            }
            if (!ops.empty()) ops.pop(); // '(' 제거
        } else { // 연산자
            while (!ops.empty() && precedence(ops.top()) >= precedence(c)) {
                int b = nums.top(); nums.pop();
                int a = nums.top(); nums.pop();
                char op = ops.top(); ops.pop();
                nums.push(apply(a, b, op));
            }
            ops.push(c);
        }
    }

    while (!ops.empty()) {
        int b = nums.top(); nums.pop();
        int a = nums.top(); nums.pop();
        char op = ops.top(); ops.pop();
        nums.push(apply(a, b, op));
    }

    cout << nums.top() << endl;
    return 0;
}
