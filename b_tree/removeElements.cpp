/*
203. 移除链表元素
给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
*/

#include "toolsfunc.h"
using namespace std;
ListNode* removeElements(ListNode* head, int val) {
        ListNode *pHead = new ListNode(-1,head);
        ListNode *p = pHead;
        while(p != nullptr){
            if(p->next->val == val){
                p->next = p->next->next;
            }
            p = p->next;
        }
        return pHead->next;
}
int main(){
    ListNode *head = new ListNode(1,new ListNode(2, new ListNode(3)));
    head = removeElements(head,3);
    printlist(head);
}