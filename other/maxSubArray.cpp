/*
53. ����������
����һ���������� nums �������ҳ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�
������ �������е�һ���������֡�
*/
#include <stdio.h>
#include <limits.h>
int maxSubArray(int* nums, int numsSize){
    int start,len,sum,maxsum=INT_MIN;
    for(start=0;start<numsSize;start++){
        sum=0;
        for(len=0;start+len<numsSize;len++){
            sum+=nums[start+len];
            if(sum>maxsum){
              maxsum=sum;
            }
        }
    }
    return maxsum;
}

