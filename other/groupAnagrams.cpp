/*
49. ��ĸ��λ�ʷ���
����һ���ַ������飬���㽫 ��ĸ��λ�� �����һ�𡣿��԰�����˳�򷵻ؽ���б�

��ĸ��λ�� ������������Դ���ʵ���ĸ�õ���һ���µ��ʣ�����Դ�����е���ĸͨ��ǡ��ֻ��һ�Ρ�
*/

#include "toolsfunc.h"
using namespace std;
bool isAnagrams(string a,string b);
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> templ;
        vector<vector<string>> answer;
        while(!strs.empty()){
            templ.clear();
            templ.push_back(strs[0]);
            strs.erase(strs.begin());
            for(int i = 0 ;i<strs.size();){
                if(isAnagrams(templ[0],strs[i])){
                    templ.push_back(strs[i]);
                    strs.erase(strs.begin()+i);
                }
                else i++;
            }
            answer.push_back(templ);
        }
        return answer;
    }
bool isAnagrams(string a,string b){
    
}
int main(){
    string a ="abc";
    string b = "cb";
    cout<<isAnagrams(a,b);
    system("pause");
}