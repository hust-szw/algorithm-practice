/*
1. ����֮��
����һ���������� nums?��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target? ����?����?���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�

����԰�����˳�򷵻ش𰸡�

?��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/two-sum
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main(){
    int nums[4] = {1,2,3,4};
    int *answer,*returnSize;
    answer=twoSum(nums,4,10,returnSize);
    //��ӡ���(�����±�)
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
