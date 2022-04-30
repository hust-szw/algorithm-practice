/*
15. 三数之和
给你一个包含 n 个整数的数组?nums，判断?nums?中是否存在三个元素 a，b，c ，使得?a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。

注意：答案中不可以包含重复的三元组。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/3sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include "tools.h"
using namespace std;

int main(){

}

vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0,j=0,k=0;
        vector<vector<int>> answer =  {};
        if(nums.size()<4) return answer;
        set<int> s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        for(i=0;i<nums.size()-2;i++)
            for(j=i+1;j<nums.size()-1;j++)
             for(k=j+1;k<nums.size();k++){
                 if(nums[i]+nums[j]+nums[k]==0){
                     vector<int> temp ={nums[i],nums[j],nums[k]};
                     answer.push_back(temp);
                 }
             }
        return answer;
        
    }