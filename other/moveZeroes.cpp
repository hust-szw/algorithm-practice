
/*
283. �ƶ���
����һ������ nums����дһ������������ 0 �ƶ��������ĩβ��ͬʱ���ַ���Ԫ�ص����˳��
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