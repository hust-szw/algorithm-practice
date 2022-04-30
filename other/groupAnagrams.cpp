/*
49. 字母异位词分组
给你一个字符串数组，请你将 字母异位词 组合在一起。可以按任意顺序返回结果列表。

字母异位词 是由重新排列源单词的字母得到的一个新单词，所有源单词中的字母通常恰好只用一次。
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