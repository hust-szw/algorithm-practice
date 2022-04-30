/*
46. 全排列
给定一个不含重复数字的数组 nums ，返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。
*/

#include "toolsfunc.h"
using namespace std;

void backtaracking(vector<int>& nums);
vector<int> s ;
vector<vector<int>> answer;
vector<vector<int>> permute(vector<int>& nums) {
        s.clear();
        answer.clear();
        backtaracking(nums);
        return answer;
}
void backtaracking(vector<int>& nums){
    if(nums.size()==0) {
        answer.push_back(s);
        return;
        }
    for(int i = 0;i<nums.size();i++){
        s.push_back(nums[i]);
        int val = nums[i];
        nums.erase(nums.begin()+i);
        backtaracking(nums);
        nums.insert(nums.begin()+i,val);
        s.pop_back();
    }
}
int main(){
    vector<int> nums = {};
    permute(nums);
    for(auto c :answer){
        for(auto m: c){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    system("pause");
}