/*
1. 两数之和
给定一个整数数组 nums?和一个整数目标值 target，请你在该数组中找出 和为目标值 target? 的那?两个?整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

?来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(){
    int nums[4] = {1,2,3,4};
    int *answer,*returnSize;
    answer=twoSum(nums,4,10,returnSize);
    //打印结果(数组下标)
    for(int i=0;i<*returnSize;i++){
        printf("%d ",answer[i]);
    }
    getchar();
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *answer;
    for(i=0;i<=numsSize-1;i++)
     for(j=i+1;j<=numsSize-1;j++)
       if(nums[i]+nums[j]==target){
           answer = (int*)malloc(sizeof(int)*2);
           *returnSize =2;
           answer[0]=i;
           answer[1]=j;
           return answer;
       }
    *returnSize = 0;   
    return NULL;
}
