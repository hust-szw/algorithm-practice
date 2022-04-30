/*
23. 合并K个升序链表
给你一个链表数组，每个链表都已经按升序排列。

请你将所有链表合并到一个升序链表中，返回合并后的链表。
*/

#include "toolsfunc.h"
using namespace std;
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size()==0) return nullptr;
    else if(lists.size()==1) return lists[0];
    else{
        while(lists.size()!=1){
            lists.push_back(mergeTwoLists(lists[0],lists[1]));
            lists.erase(lists.begin(),lists.begin()+2);
        }
        return lists[0];
    }

}
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        else if (list2 == nullptr) return list1;
        else{
            ListNode* list3,*list3_rear;
            if(list1->val<list2->val){
                list3 = new ListNode(list1->val);
                list3_rear = list3;
                list1 = list1->next;
            }
            else{
                list3 = new ListNode(list2->val);
                list3_rear = list3;
                list2 = list2->next;
            }
            while(list1!=nullptr&&list2!=nullptr){
                if(list1->val<list2->val){
                    list3_rear->next =  new ListNode(list1->val);
                    list3_rear = list3_rear->next;
                    list1 = list1->next;
                }
                else {
                    list3_rear->next =  new ListNode(list2->val);
                    list3_rear = list3_rear->next;
                    list2 = list2->next;  
                }
                
            }
            if(list1!=nullptr) list3_rear->next = list1;
            if(list2!=nullptr) list3_rear->next = list2;
            return list3;
        }
        
    }
int main(){
    

}