/*
34. �����������в���Ԫ�صĵ�һ�������һ��λ��
����һ�������������е��������� nums����һ��Ŀ��ֵ target���ҳ�����Ŀ��ֵ�������еĿ�ʼλ�úͽ���λ�á�

��������в�����Ŀ��ֵ target������ [-1, -1]��
*/

#include "toolsfunc.h"
using namespace std;

int main(){

}

vector<int> searchRange(vector<int>& nums, int target) {
    int low, high, mid;
    vector<int> answer = {-1,1};
    int low_t=-1,high_t=-1;
    low = 0;
    high = nums.size()-1;
    while ( low <= high )  
    {
        mid = (low + high) / 2;
        if (nums[mid] <= target) {
            low = mid + 1;
            high_t = low;
        }
        else high = mid - 1;
    }
    low = 0;
    high = nums.size()-1;
    while ( low <= high )  
    {
        mid = (low + high) / 2;
        if (nums[mid] < target) {
            low = mid + 1;
            high_t = mid;
        }
        else{
            high = mid - 1;
            }
    }
    return answer;
    
}