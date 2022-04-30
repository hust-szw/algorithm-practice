/*
46. ȫ����
����һ�������ظ����ֵ����� nums �������� ���п��ܵ�ȫ���� ������� ������˳�� ���ش𰸡�
*/

#include "toolsfunc.h"
using namespace std;

void backtaracking(vector<int>& nums);
vector<int> s ;
vector<vector<int>> answer;
vector<vector<int>> permute(vector<int>& nums) {
        s.clear();
        answer.clear();
        backtaracking(nums);
        return answer;
}
void backtaracking(vector<int>& nums){
    if(nums.size()==0) {
        answer.push_back(s);
        return;
        }
    for(int i = 0;i<nums.size();i++){
        s.push_back(nums[i]);
        int val = nums[i];
        nums.erase(nums.begin()+i);
        backtaracking(nums);
        nums.insert(nums.begin()+i,val);
        s.pop_back();
    }
}
int main(){
    vector<int> nums = {};
    permute(nums);
    for(auto c :answer){
        for(auto m: c){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    system("pause");
}