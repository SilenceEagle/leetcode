#include <iostream>

class MyLinkedList {
public:
    struct LinkedNode {
        int val;
        LinkedNode * next;
        LinkedNode (int val): val(val), next(nullptr) {};
    };

    MyLinkedList() {
        _dummyHead = new LinkedNode(-1);
        _size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= _size) {
            return -1;
        } else {
            LinkedNode * cur = _dummyHead;
            while (index--) {
                cur = cur->next;
            }
            return cur->next->val;
        }
    }
    
    void addAtHead(int val) {
        LinkedNode * head = new LinkedNode(val);
        head->next = _dummyHead->next;
        _dummyHead->next = head;
        _size++;
    }
    
    void addAtTail(int val) {
        LinkedNode * cur = _dummyHead;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = new LinkedNode(val);
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > _size || index < 0) {
            return;
        } else {
            LinkedNode * cur = _dummyHead;
            while (index--) {
                cur = cur->next;
            }
            LinkedNode * tmp = new LinkedNode(val);
            tmp->next = cur->next;
            cur->next = tmp;
            _size++;
        }

    }
    
    void deleteAtIndex(int index) {
        if (index >= 0 && index < _size) {
            LinkedNode * cur = _dummyHead;
            while (index--) {
                cur = cur->next;
            }
            LinkedNode * tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
            _size--;
        }

    }
private:
    int _size;
    LinkedNode * _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */