/*
101. �Գƶ�����
����һ����������������Ƿ��Ǿ���ԳƵġ�
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

//˼·1 ��һ���������Ǿ���ԳƵ����������������Ҳ�ǡ����ĶԳơ���
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
    