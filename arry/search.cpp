/*
704. 二分查找
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
*/

#include "toolsfunc.h"
using namespace std;
int search(vector<int>& nums, int target);

int main(){
    int nums_p[6] = {1, 2, 3, 4, 5};
    vector<int> nums={1,2,3,4,5};
    cout << search(nums,2);
    system("pause");
}
int search(vector<int>& nums, int target) {
    int low, high, mid;
    low = 0;
    high = nums.size()-1;
    while ( low <= high )  
    {
        mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return -1;
    
}