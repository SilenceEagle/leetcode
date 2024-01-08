#include <iostream>
#include <string>
 
using namespace std;
 
 
struct Node {
    Node * next;
    int val;
    Node(int v): next(nullptr), val(v) {};
};
 
 
class LinkedList {
    private:
        Node* dummyHead = new Node(0);
        int size = 0;
     
    public:
        void insert(int index, int val, bool display) {
            // index start from 1 
            if (index > size + 1) {
                cout << "insert fail\n";
                return;
            }
            Node* cur = dummyHead;
            while (index-- > 1 && cur) cur = cur->next;
            Node* tmp = cur->next;
            cur->next = new Node(val);
            cur->next->next = tmp;
            size++;
            if (display) {
                cout << "insert OK\n";
            }
        }
         
        void drop(int index) {
            // index start from 1
            if (index > size) {
                cout << "delete fail\n";
                return;
            }
            Node* cur = dummyHead;
            while (index-- > 1 && cur) cur = cur->next;
            Node* tmp = cur->next;
            cur->next = tmp->next;
            delete tmp;
            size--;
            cout << "delete OK\n";
        }
         
        void show() {
            if (size > 0) {
                Node* cur = dummyHead->next;
                cout << cur->val;
                cur = cur->next;
                while (cur) {
                    cout << " " << cur->val;
                    cur = cur->next;
                }
                cout << endl;
            } else {
                cout << "Link list is empty\n";
            }
        }
         
        void get(int index) {
            // index start from 1 
            if (index > size) {
                cout << "get fail\n";
            } else {
                Node* cur = dummyHead->next;
                while (index-- > 1 && cur) {
                    cur = cur->next;
                }
                cout << cur->val << endl;
            }
        }
};
 
int main() {
    int n, m, a, b;
    LinkedList list;
    string op;
    while (cin >> n) {
        int val;
         
        while (n--) {
            cin >> val;
            list.insert(1, val, false);
        }
        cin >> m;
        while (m--) {
            cin >> op;
            if (0 == op.compare("show")) {
                list.show();
            } else if (0 == op.compare("delete")) {
                cin >> a;
                list.drop(a);
            } else if (0 == op.compare("insert")) {
                cin >> a >> b;
                list.insert(a, b, true);
            } else if (0 == op.compare("get")) {
                cin >> a;
                list.get(a);
            }
        }
    }
}
 
 
 
/**************************************************************
    Problem: 1017
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:18 ms
    Memory:2180 kb
****************************************************************/