/*
17. �绰�������ĸ���
����һ������������?2-9?���ַ����������������ܱ�ʾ����ĸ��ϡ��𰸿��԰� ����˳�� ���ء�

�������ֵ���ĸ��ӳ�����£���绰������ͬ����ע�� 1 ����Ӧ�κ���ĸ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

#include "tools.h"
using namespace std;
vector<string> letterCombinations(string digits);

int main(){
    string s ="2345";
    vector<string> answer = letterCombinations(s);
    for(auto c:answer){
        cout<<c<<" ";
    }
    system("pause");
}
 vector<string> letterCombinations(string digits) {
     vector<vector<char>> nums;
     vector<char> temp={};
     nums.push_back(temp);
     nums.push_back(temp);
     temp.push_back('a');
     temp.push_back('b');
     temp.push_back('c');
     nums.push_back(temp);
     temp.clear();
     temp.push_back('d');
     temp.push_back('e');
     temp.push_back('f');
     nums.push_back(temp);
     temp.clear();
     temp.push_back('g');
     temp.push_back('h');
     temp.push_back('i');
     nums.push_back(temp);
     temp.clear();
     temp.push_back('j');
     temp.push_back('k');
     temp.push_back('l');
     nums.push_back(temp);
     temp.clear();
     temp.push_back('m');
     temp.push_back('n');
     temp.push_back('o');
     nums.push_back(temp);
     temp.clear();
     temp.push_back('p');
     temp.push_back('q');
     temp.push_back('r');
     temp.push_back('s');
     nums.push_back(temp);
     temp.clear();
     temp.push_back('t');
     temp.push_back('u');
     temp.push_back('v');
     nums.push_back(temp);
     temp.clear();
      temp.push_back('w');
     temp.push_back('x');
     temp.push_back('y');
     temp.push_back('z');
     nums.push_back(temp);
     temp.clear();
     vector<string> answer = {};
     if(digits.length()==0) return  answer;
     else if(digits.length()==1) {
        for(auto c : nums[digits[0]-'0']) {
        string s ="";
        s+=c;
        answer.push_back(s);
        s="";
        }
        return answer;
     }
     else if(digits.length()==2){
         int i,j;
         for(i=0;i<nums[digits[0]-'0'].size();i++){
             for(j=0;j<nums[digits[1]-'0'].size();j++){
                 string s ="";
                 s=s+nums[digits[0]-'0'][i]+nums[digits[1]-'0'][j];
                 answer.push_back(s);
             }
         }
         return answer;
     }

     else if(digits.length()==3){
         int i,j,k;
         for(i=0;i<nums[digits[0]-'0'].size();i++){
             for(j=0;j<nums[digits[1]-'0'].size();j++){
                 for(k=0;k<nums[digits[2]-'0'].size();k++){
                 string s ="";
                 s=s+nums[digits[0]-'0'][i]+nums[digits[1]-'0'][j]+nums[digits[2]-'0'][k];
                 answer.push_back(s);
                 }
             }
         }
         return answer;
     }
     else{
         int i,j,k,l;
         for(i=0;i<nums[digits[0]-'0'].size();i++){
             for(j=0;j<nums[digits[1]-'0'].size();j++){
                 for(k=0;k<nums[digits[2]-'0'].size();k++){
                     for(l=0;l<nums[digits[3]-'0'].size();l++){
                 string s ="";
                 s=s+nums[digits[0]-'0'][i]+nums[digits[1]-'0'][j]+nums[digits[2]-'0'][k]+nums[digits[3]-'0'][l];
                 answer.push_back(s);
                 }
                 }
             }
         }
          return answer;
     }

}