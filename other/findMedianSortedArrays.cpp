/*
4. 寻找两个正序数组的中位数
给定两个大小分别为 m 和 n 的正序（从小到大）数组?nums1 和?nums2。请你找出并返回这两个正序数组的 中位数 。

算法的时间复杂度应该为 O(log (m+n)) 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/median-of-two-sorted-arrays
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include "tools.h"
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);

int main(){
    vector<int> nums1={1};
    vector<int> nums2= {2,3,4};
    double answer = findMedianSortedArrays(nums1,nums2);
    cout<<answer<<endl;
    system("pause");
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> nums;
    if(nums1.size()+nums2.size()==0) return double(0);
    else if(nums1.size()==0){
        nums = nums2;
    }
    else if(nums2.size()==0){
        nums = nums1;
    }
    else{
        int i=0,j=0;
        while(i !=nums1.size() && j!=nums2.size()){
            if(nums1[i]<nums2[j]) nums.push_back(nums1[i++]);
            else nums.push_back(nums2[j++]);
        }
        while(i !=nums1.size()) nums.push_back(nums1[i++]);
        while(j !=nums2.size()) nums.push_back(nums2[j++]);
    }
    if(nums.size()%2==1) return double(nums[nums.size()/2]);
    else return (double(nums[nums.size()/2]) + double(nums[nums.size()/2 - 1]))/2;

}