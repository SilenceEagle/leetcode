#include <iostream>
#include <queue>

using namespace std;

class MyStack {
private:
    queue<int> qu;
public:
    MyStack() {

    }
    
    void push(int x) {
        qu.push(x);

    }
    
    int pop() {
        int n = qu.size();
        n--;
        while (n--) {
            qu.push(qu.front());
            qu.pop();
        }
        int back = qu.front();
        qu.pop();
        return back;
    }
    
    int top() {
        int back = this->pop();
        qu.push(back);
        return back;
    }
    
    bool empty() {
        return qu.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */