/*
977. ���������ƽ��
����һ���� �ǵݼ�˳�� ������������� nums������ ÿ�����ֵ�ƽ�� ��ɵ������飬Ҫ��Ҳ�� �ǵݼ�˳�� ����

 
*/

#include "toolsfunc.h"
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    if (nums.size() < 2) return nums;
    int i = 0;//��ǰ���������ָ��
    int j = nums.size()-1;//�Ӻ���ǰ������ָ��
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