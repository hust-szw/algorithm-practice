/*
977. 有序数组的平方
给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。

 
*/

#include "toolsfunc.h"
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    if (nums.size() < 2) return nums;
    int i = 0;//从前往后遍历的指针
    int j = nums.size()-1;//从后往前遍历的指针
    while(nums[0] < 0 ){
        if (~nums[0] + 1 >= nums[j]){
            int temp = nums[0];
            for (int k = 0; k < j; k++){
                nums[k] = nums[k+1];
            }
            nums[j] = temp;  
        }
        else{
            j--;
        }
    }
    return nums;
}
int main(){

}