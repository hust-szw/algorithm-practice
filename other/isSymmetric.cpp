/*
101. 对称二叉树
给定一个二叉树，检查它是否是镜像对称的。
*/

#include<vector>
using namespace std;
//Definition for a binary tree node.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

//思路1 若一个二叉树是镜像对称的则其中序遍历数组也是“中心对称”的
bool isSymmetric(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        int i,j;
        for(i=0,j=res.size()-1;i<j;i++,j--){
            if(res[i]!=res[j]) return false;
        }
        return true;
    }
void inorder(TreeNode* root,vector<int>& res){
    if(!root) return;
    if(!(root->left) && !(root->right)) return;
    else if(root->left==nullptr){
        res.push_back(__INT_MAX__);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    else if(root->right==nullptr){
        inorder(root->left, res);
        res.push_back(root->val);
        res.push_back(__INT_MAX__);
    }
    else{
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
}
    