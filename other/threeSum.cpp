/*
15. ����֮��
����һ������ n ������������?nums���ж�?nums?���Ƿ��������Ԫ�� a��b��c ��ʹ��?a + b + c = 0 �������ҳ����к�Ϊ 0 �Ҳ��ظ�����Ԫ�顣

ע�⣺���в����԰����ظ�����Ԫ�顣

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/3sum
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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