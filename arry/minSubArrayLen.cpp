/*
209. ������С��������
����һ������ n ���������������һ�������� target ��
�ҳ���������������� �� target �ĳ�����С�� ���������� [numsl, numsl+1, ..., numsr-1, numsr] ���������䳤�ȡ���������ڷ��������������飬���� 0 ��
*/

#include "toolsfunc.h"
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, right = 0, sum = 0,ans = INT16_MAX;
    while (right < nums.size()){
        sum += nums[right];
        while (sum >= target){
            ans = min(ans,right - left + 1);
            sum -= nums[left++];
        }
    }
    return ans == INT16_MAX ? 0 : ans;
}

int main(){

}