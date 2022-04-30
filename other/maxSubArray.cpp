/*
53. 最大子数组和
给你一个整数数组 nums ，请你找出一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
子数组 是数组中的一个连续部分。
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

