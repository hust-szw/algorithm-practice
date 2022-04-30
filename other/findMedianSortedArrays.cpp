/*
4. Ѱ�����������������λ��
����������С�ֱ�Ϊ m �� n �����򣨴�С��������?nums1 ��?nums2�������ҳ���������������������� ��λ�� ��

�㷨��ʱ�临�Ӷ�Ӧ��Ϊ O(log (m+n)) ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/median-of-two-sorted-arrays
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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