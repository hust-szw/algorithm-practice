/*
27. 移除元素
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

#include "toolsfunc.h"
using namespace std;
//暴力解法
// int removeElement(vector<int>& nums, int val) {
//     int len = nums.size();
//     for(int i = 0; i < len; i++){
//         if(nums[i] == val){
//             for(int j = i; j < len - 1; j++){
//                 nums[j] = nums[j + 1];
//             }
//             len--;
//         } 
//     }
//     return len;
// }

//双指针法
int removeElement(vector<int>& nums, int val){
    // lowIndex 表示下一个即将赋值的位置。
    // fastIndex 表示下一个即将处理的元素位置。
    int slowIndex = 0,fastIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++){
        if (nums[fastIndex] != val){
            nums[slowIndex++] = nums[fastIndex]; 
        }
    }
    return slowIndex;
}
int main(){

}