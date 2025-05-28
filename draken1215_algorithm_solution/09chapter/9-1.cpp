#include <iostream>

using namespace std;


template <class T>
class LinkedList{

public:
    LinkedList() : head(new Node()), tail(new Node()), sz{} {
        head->next =tail;
        tail->prev = head;
    }
    ~LinkedList(){
        Node *node = head;
        while (node){
            Node *next = node->next;
            delete node;
            node = next;
        }
    }
    T &front() {
        return head->next->val;
    } 
    T &back(){
        return tail->prev->val;
    }
    bool empty(){
        return !sz;
    }
    size_t size(){
        return sz;
    }
    void push_front(const T &value){
        Node *node = new Node(value);
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
        sz++;
    }
    void pop_front(){
        Node *node = head->next;
        node->next->prev = head;
        head->next = node->next;
        delete node;
        --sz;
    }
    void push_back(const T &value){
        Node *node = new Node(value);
        node->next = tail;
        node->prev = tail->prev;
        tail->prev->next = node;
        tail->prev = node;
        sz++;
    }
    void pop_back(){
        Node *node = tail->prev;
        node->prev->next = tail;
        tail->prev = node->prev;
        delete node;
        sz--;
    }

private:
    struct Node{
        Node *prev;
        Node *next;
        T val;
        Node(const T &val = T{}) : next(nullptr), prev(nullptr), val(val) {} 
    };
    Node *head;
    Node *tail;
    size_t sz;

};


template <class T>
class Stack{
public:
    Stack() = default;
    bool empty(){
        return st.empty();
    }
    size_t size(){
        return st.size();
    }
    T &top(){
        return st.back();
    }
    void push(const T &value){
        st.push_back(value);
    }
    void pop(){
        st.pop_back();
    }


private:
    LinkedList<T> st;
};

template <class T>
class Queue{
public:
    Queue() = default;
    size_t size(){
        return q.size();
    }
    bool empty(){
        return q.empty();
    }
    void push(const T &val){
        q.push_back(val);
    }
    void pop(){
        q.pop_front();
    }
    T &front(){
        return q.front();
    }


private:
    LinkedList<T> q;
};


int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Stack top: " << s.top() << endl;
    s.pop();
    cout << "Stack top after pop: " << s.top() << endl;

    Queue<int> q;
    q.push(1);
    q.push(2);
    cout << "Queue front: " << q.front() << endl;
    q.pop();
    cout << "Queue front after pop: " << q.front() << endl;
}