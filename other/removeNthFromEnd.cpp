/*
19. ɾ������ĵ����� N �����
����һ������ɾ������ĵ����� n ����㣬���ҷ��������ͷ��㡣
*/

#include "toolsfunc.h"
using namespace std;
ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m;//��¼������
        ListNode *node = head;
        ListNode *tempnode ;
        if(not node) m=0;
        else{
            for(m=0;node;m++){
                node = node->next;
            }
        }
        if(n>m) return nullptr;
        else if(n==m){
            tempnode = head;
            head = head->next;
            delete(tempnode);
            return head;
        }
        else{
            node = head;
            for(int i=0;i<m-n-1;i++) {
                node = node->next;
                }
            tempnode = node->next;
            node->next = tempnode->next;
            delete(tempnode);
            return head;
        }

         
    }

int main(){
    ListNode node,*head;
    head = new ListNode(1,new ListNode(2,new ListNode(3,new ListNode(4,new ListNode(5)))));
    head = removeNthFromEnd(head,2);
    printlist(head);
}

