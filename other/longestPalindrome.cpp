/*
5. 最长回文子串
给你一个字符串 s，找到 s 中最长的回文子串。
*/
#include<iostream>
#include"tools.h"
using namespace std;
string longestPalindrome(string s);
string longestPalindrome2(string s);
bool isPalindrome(string s);
int main(){
    string s ;
    cout<<"please input target string: ";
    cin>>s;
    cout<<"The longest palindrome is:"+longestPalindrome2(s)<<endl;
    system("pause");
    return 1;

}

string longestPalindrome(string s) {
        string temps = "";
        int lenOfTemps = 0;
        int i,j;
        for(i=0;i<s.size();i++){
            for(j=1;j<=s.size()-i;j++){
                if(isPalindrome(s.substr(i,j))){
                    if(s.substr(i,j).size()>lenOfTemps){
                        lenOfTemps = s.substr(i,j).size();
                        temps = s.substr(i,j);
                    }
                }
            }
        }
        return temps;
    }

bool isPalindrome(string s){

    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]) return false;
    }
    return true;
}

string longestPalindrome2(string s) {
    //思路：从最小的子串开始扩充 如果该子串是回文子串，
    //      那么如果该子串左边一个位置和右边一个位置的值相等那么就可以得到一个相对更大点的回文子串
    //      接着可以继续考察这个相对大点的回文子串是否可以继续扩充

    vector<int> start,end;
    int pos1 = 0,pos2= 0;
    //初始化
    for(int i=0;i<s.length();i++){
        pos1 = i;
        pos2 = i;
        start.push_back(i);
        end.push_back(i);
    }
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]) {
        pos1 = i;
        pos2 = i+1;
        start.push_back(i);
        end.push_back(i+1);
        }
    }
    //扩充
    while(start.size()!=0){
        for(int i = 0;i<start.size();){
            if(start[i]-1<0||end[i]+1>s.size()-1){//扩充后越界
                start.erase(start.begin()+i);
                end.erase(end.begin()+i);
            }
            else{
                if(s[start[i]-1]==s[end[i]+1]) {
                    start[i]=start[i]-1;
                    end[i] = end[i]+1;
                    if(end[i]-start[i]>pos2-pos1) {
                        pos2 = end[i];
                        pos1 = start[i];
                    }
                    i++;
                }
                else{
                    start.erase(start.begin()+i);
                    end.erase(end.begin()+i);
                }
            }
        }
    }
    return s.substr(pos1,pos2-pos1+1);
}