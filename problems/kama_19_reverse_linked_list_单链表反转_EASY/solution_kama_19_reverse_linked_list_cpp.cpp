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
            Node* thisNode = new Node(val);
            tail->next = thisNode;
            tail = thisNode;
            size++;
        }
         
        void show() {
            if (size) {
                Node* cur = dummyHead->next;
                cout << cur->val;
                cur = cur->next;
                while (cur) {
                    cout << " " << cur->val;
                    cur = cur->next;
                }
                cout << "\n";
                 
            } else {
                cout << "list is empty\n";
            }
        }
};
 
Node* reverseList(Node* head) {
    Node* pre = nullptr;
    Node* cur = head;
    while (cur) {
        Node* next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}
 
int main() {
    int n;
    while (cin>>n) {
        if (n) {
            LinkedList list;
            int a;
            while (n--) {
                cin >> a;
                list.append(a);
            }
            list.show();
            list.dummyHead->next = reverseList(list.dummyHead->next);
            list.show();
        } else {
            cout << "list is empty\n";
        }
    }
}
 
 
/**************************************************************
    Problem: 1018
    User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
    Language: C++
    Result: 正确
    Time:92 ms
    Memory:5344 kb
****************************************************************/