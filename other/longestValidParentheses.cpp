/*
32. 最长有效括号
给你一个只包含 '(' 和 ')' 的字符串，找出最长有效（格式正确且连续）括号子串的长度。
*/

#include "toolsfunc.h"
using namespace std;
bool isValid(string s) {
        stack<int> mystack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                mystack.push(s[i]);
            }

            else if(s[i]==')'){
                if(mystack.empty()||mystack.top()!='(') return false;
                else mystack.pop();
            }
            else return false;
        }
        return mystack.empty();    
    }
int longestValidParentheses(string s) {
    int start=1,end=0;
    if(s.length()<2) return 0;
    for(int i= 0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(isValid(s.substr(i,j-i+1))){
                cout<<s.substr(i,j-i+1)<<endl;
                if(j-i>end-start){
                    end = j;
                    start = i;
                }
            }
            cout<<end-start<<endl;
        }
    }
    return end-start+1;
    }


int main(){
    string s = "()()()";
    cout<<longestValidParentheses(s);
    system("pause");
}