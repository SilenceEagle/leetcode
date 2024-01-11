#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;
public:
    MyQueue() {

    }
    
    void push(int x) {
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        s1.push(x);
    }
    
    int pop() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        int head = s2.top();
        s2.pop();
        return head;
    }
    
    int peek() {
        if (s1.empty()) {
            return s2.top();
        } else {
            while (s1.size() > 1) {
                s2.push(s1.top());
                s1.pop();
            }
            return s1.top();
        }
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

class MyQueue2 {
private:
    stack<int> in, out;
public:
    MyQueue2() {

    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        int front;
        if (!out.empty()) {
            front = out.top();
            out.pop();
        } else {
            while (in.size() > 1) {
                out.push(in.top());
                in.pop();
            }
            front = in.top();
            in.pop();
        }
        return front;
    }
    
    int peek() {
        int head = this->pop();
        out.push(head);
        return head;
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */