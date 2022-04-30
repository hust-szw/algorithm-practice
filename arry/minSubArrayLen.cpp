/*
209. 长度最小的子数组
给定一个含有 n 个正整数的数组和一个正整数 target 。
找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。
*/

#include "toolsfunc.h"
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, right = 0, sum = 0,ans = INT16_MAX;
    while (right < nums.size()){
        sum += nums[right];
        while (sum >= target){
            ans = min(ans,right - left + 1);
            sum -= nums[left++];
        }
    }
    return ans == INT16_MAX ? 0 : ans;
}

int main(){

}