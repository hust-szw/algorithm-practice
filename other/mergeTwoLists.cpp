/*
21. 合并两个有序链表
将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
*/
#include<iostream>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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