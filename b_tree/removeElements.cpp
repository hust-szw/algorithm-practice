/*
203. �Ƴ�����Ԫ��
����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
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