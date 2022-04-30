
/*
283. 移动零
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
*/
#include <tools.h>
void moveZeroes(int* nums, int numsSize){
    int numOfZero = 0;
    int i,j;
    for(i=0;i<numsSize;i++){
        if(nums[i]==0){
            for(j=i+1;j<numsSize-numOfZero;j++){
                nums[j-1]=nums[j];
            }
            nums[j-1]=0;
        }
        
    }
}


int main()
{
    
}