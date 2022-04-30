/*
39. 组合总和
给你一个 无重复元素 的整数数组 candidates 和一个目标整数 target ，找出 candidates 中可以使数字和为目标数 target 的 所有 不同组合 ，并以列表形式返回。你可以按 任意顺序 返回这些组合。

candidates 中的 同一个 数字可以 无限制重复被选取 。如果至少一个数字的被选数量不同，则两种组合是不同的。 

对于给定的输入，保证和为 target 的不同组合数少于 150 个。
*/

#include "toolsfunc.h"
using namespace std;
void backtracking(vector<int>& candidates, int target,int sum);
vector<int> l;
vector<vector<int>> answer;
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        l.clear();
        answer.clear();
        backtracking(candidates,target,0);
        return answer;
    }
void backtracking(vector<int>& candidates, int target,int sum){
    if(target<sum) return;
    else if(target==sum) {
        answer.push_back(l);
        return;
    }
    vector<int> c = candidates;
    for(int i = 0 ;i < c.size();i++){
        if(c[i]==0) continue;
        sum+=c[i];
        l.push_back(c[i]);
        backtracking(c,target,sum);
        l.pop_back();
        sum-=c[i];
        c[i]=0;
    }  
}
int main(){
    vector<int> candidates = {2,3,6,7};
    combinationSum(candidates,7);
        for(auto c :answer){
        for(auto m: c){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    system("pause");
    
}