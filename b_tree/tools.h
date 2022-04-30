#include<vector>
#include<iostream>
#include<stack>
#include<string>
#include <algorithm>
#include <set>
#include <list>


//二叉树节点定义
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


void printtree_cx( TreeNode *root);  //层序打印一颗二叉树

//链表节点定义
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
void printlist(ListNode *head);