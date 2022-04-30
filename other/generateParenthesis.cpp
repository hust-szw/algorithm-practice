/*
22. 括号生成
数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。
*/

#include "toolsfunc.h"
using namespace std;
void digui(int i,stack<char> &mystack);
string s="";
vector<string> answer;
vector<string> generateParenthesis(int n) {
    stack<char> mystack;
    s= "";
    answer.clear();
    digui(n,mystack);
    return answer;
}
void digui(int i,stack<char> &mystack){
    if(i==0 && mystack.empty()) {
        answer.push_back(s);
        return;
    }
    if(i==0) {
        s+=')';
        mystack.pop();
        digui(i,mystack);
        }
    else if(mystack.empty()){
        s+='(';
        mystack.push('(');
        digui(i-1,mystack);
    }
    else{
        string temps = s;
        stack<char> tempstack = mystack;
        s+=')';
        mystack.pop();
        digui(i,mystack);
        mystack = tempstack;
        s = temps;
        s+='(';
        mystack.push('(');
        digui(i-1,mystack);
    }
}
int main(){
    generateParenthesis(3);
    for(auto c : answer){
        cout << c<<" ";
    }
    system("pause");
}