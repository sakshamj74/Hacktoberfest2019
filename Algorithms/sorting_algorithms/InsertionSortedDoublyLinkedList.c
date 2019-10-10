#include<stdio.h>
#include<stdlib.h>
/* This function inserts a node in a sorted Doubly linkedlist such that it remains sorted*/
struct DoublyLinkedListNode {
  int data;
  DoublyLinkedListNode* next;
  DoublyLinkedListNode* prev;
};
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* p = (DoublyLinkedListNode* )malloc(sizeof(DoublyLinkedListNode*));
    p->next = NULL;
    p->prev = NULL;
    p->data = data;
    DoublyLinkedListNode* start = head;
    if(head==NULL) {
        head = p;
        return head;
    }
    else {
        while(start->next!=NULL) {
            if(p->data < head->data) {
                p->next = head;
                head = p;
                return head;
            }
            if(p->data > start->next->data) {
                start = start -> next;
            }
            else {
                p->prev = start;
                p->next = start->next;
                start->next = p;
                return head;
            }
        }
    }
    if(p->next == NULL && p->prev == NULL) {
        p->prev = start;
        start -> next = p;
    }
    return head;
}
