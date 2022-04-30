#include "tools.h"
using namespace std;

void printtree_cx( TreeNode *root){
    if(!root) {
        cout<<"the tree is null"<<endl;
        return;
        };
}


void printlist(ListNode *head){
    ListNode *node = head;
    while(node){
        cout<<node->val<<" ";
        node = node->next;
    }
    cout<<endl;
    system("pause");
}

