/*
704. ���ֲ���
����һ�� n ��Ԫ������ģ������������� nums ��һ��Ŀ��ֵ target  ��дһ���������� nums �е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��
*/

#include "toolsfunc.h"
using namespace std;
int search(vector<int>& nums, int target);

int main(){
    int nums_p[6] = {1, 2, 3, 4, 5};
    vector<int> nums={1,2,3,4,5};
    cout << search(nums,2);
    system("pause");
}
int search(vector<int>& nums, int target) {
    int low, high, mid;
    low = 0;
    high = nums.size()-1;
    while ( low <= high )  
    {
        mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return -1;
    
}