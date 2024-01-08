#include <iostream>
 
using namespace std;
 
struct Node {
    int val;
    Node* next;
    Node(): val(), next(nullptr) {};
    Node(int v): val(v), next(nullptr) {};
};
 
class LinkedList {
    public:
        Node* dummyHead = new Node(0);
        Node* tail = dummyHead;
        int size = 0;
         
        void append(int val) {
            Node* n = new Node(val);
            tail->next = n;
            tail = n;
            size++;
        }
         
        void show() {
            if (size == 0) {
                cout << "list is empty";
            } else {
                Node* cur = dummyHead->next;
                cout << cur->val;
                cur = cur->next;
                while (cur) {
                    cout << " " << cur->val;
                    cur = cur->next;
                }
                cout << endl;
            }
        }
         
        void deleteD() {
            Node* cur = dummyHead->next;
            Node* pre = dummyHead;
            int i = 0;
            while (cur) {
                if (i > 0 && cur->val == pre->val) {
                    pre->next = cur->next;
                    delete cur;
                    cur = pre->next;
                } else {
                    pre = cur;
                    cur = cur->next;
                }
                i++;
            }
        }
     
};
 
int main() {
    int n, a; 
    while (cin >> n) {
        if (n == 0) {
            cout << "list is empty";
        } else {
            LinkedList myL;
            while (n--) {
                cin >> a;
                myL.append(a);
            }
            myL.show();
            myL.deleteD();
            myL.show();
        }
    }
     
}
 
 
 
 
 
 
/**************************************************************
    Problem: 1019
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:109 ms
    Memory:5344 kb
****************************************************************/