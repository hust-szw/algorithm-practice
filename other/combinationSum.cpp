/*
39. ����ܺ�
����һ�� ���ظ�Ԫ�� ���������� candidates ��һ��Ŀ������ target ���ҳ� candidates �п���ʹ���ֺ�ΪĿ���� target �� ���� ��ͬ��� �������б���ʽ���ء�����԰� ����˳�� ������Щ��ϡ�

candidates �е� ͬһ�� ���ֿ��� �������ظ���ѡȡ ���������һ�����ֵı�ѡ������ͬ������������ǲ�ͬ�ġ� 

���ڸ��������룬��֤��Ϊ target �Ĳ�ͬ��������� 150 ����
*/

#include "toolsfunc.h"
using namespace std;
void backtracking(vector<int>& candidates, int target,int sum);
vector<int> l;
vector<vector<int>> answer;
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        l.clear();
        answer.clear();
        backtracking(candidates,target,0);
        return answer;
    }
void backtracking(vector<int>& candidates, int target,int sum){
    if(target<sum) return;
    else if(target==sum) {
        answer.push_back(l);
        return;
    }
    vector<int> c = candidates;
    for(int i = 0 ;i < c.size();i++){
        if(c[i]==0) continue;
        sum+=c[i];
        l.push_back(c[i]);
        backtracking(c,target,sum);
        l.pop_back();
        sum-=c[i];
        c[i]=0;
    }  
}
int main(){
    vector<int> candidates = {2,3,6,7};
    combinationSum(candidates,7);
        for(auto c :answer){
        for(auto m: c){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    system("pause");
    
}