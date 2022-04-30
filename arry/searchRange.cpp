/*
34. 在排序数组中查找元素的第一个和最后一个位置
给定一个按照升序排列的整数数组 nums，和一个目标值 target。找出给定目标值在数组中的开始位置和结束位置。

如果数组中不存在目标值 target，返回 [-1, -1]。
*/

#include "toolsfunc.h"
using namespace std;

int main(){

}

vector<int> searchRange(vector<int>& nums, int target) {
    int low, high, mid;
    vector<int> answer = {-1,1};
    int low_t=-1,high_t=-1;
    low = 0;
    high = nums.size()-1;
    while ( low <= high )  
    {
        mid = (low + high) / 2;
        if (nums[mid] <= target) {
            low = mid + 1;
            high_t = low;
        }
        else high = mid - 1;
    }
    low = 0;
    high = nums.size()-1;
    while ( low <= high )  
    {
        mid = (low + high) / 2;
        if (nums[mid] < target) {
            low = mid + 1;
            high_t = mid;
        }
        else{
            high = mid - 1;
            }
    }
    return answer;
    
}