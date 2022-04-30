/*
33. 搜索旋转排序数组
整数数组 nums 按升序排列，数组中的值 互不相同 。

在传递给函数之前，nums 在预先未知的某个下标 k（0 <= k < nums.length）上进行了 旋转，使数组变为 [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]（下标 从 0 开始 计数）。例如， [0,1,2,4,5,6,7] 在下标 3 处经旋转后可能变为 [4,5,6,7,0,1,2] 。

给你 旋转后 的数组 nums 和一个整数 target ，如果 nums 中存在这个目标值 target ，则返回它的下标，否则返回 -1 。
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