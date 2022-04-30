/*
33. ������ת��������
�������� nums ���������У������е�ֵ ������ͬ ��

�ڴ��ݸ�����֮ǰ��nums ��Ԥ��δ֪��ĳ���±� k��0 <= k < nums.length���Ͻ����� ��ת��ʹ�����Ϊ [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]���±� �� 0 ��ʼ �����������磬 [0,1,2,4,5,6,7] ���±� 3 ������ת����ܱ�Ϊ [4,5,6,7,0,1,2] ��

���� ��ת�� ������ nums ��һ������ target ����� nums �д������Ŀ��ֵ target ���򷵻������±꣬���򷵻� -1 ��
*/

#include "toolsfunc.h"
using namespace std;
int devide2search(int low,int high,vector<int>& nums,int target);
int search(vector<int>& nums, int target) {
    return devide2search(0,nums.size()-1,nums,target);
    }
int devide2search(int low,int high,vector<int>& nums,int target){
    if(low>high) return -1;
    else if(low == high) return target == nums[low]?low:-1;
    else if(low == high -1 )return target == nums[low]?low:(target==nums[high]?high:-1);
    else{
        int mid = (low+high)/2;
        if(target == nums[mid]) return mid;
        else if(nums[low]<=nums[mid-1]){
            if(nums[low]<=target&&target<=nums[mid-1]) return devide2search(low,mid-1,nums,target);
            else return devide2search(mid+1,high,nums,target);
        }
        else{
            if(nums[mid+1]<=target&&target<=nums[high]) return devide2search(mid+1,high,nums,target);
            else return devide2search(low,mid-1,nums,target);
        }
    }


}
int main(){
    vector<int> nums  {1,3};
    cout<<search(nums,0);
    system("pause");
}