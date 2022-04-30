/*
20. 有效的括号
给定一个只包括 '('，')'，'{'，'}'，'['，']'?的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
?

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s);
int main(){
   cout<<isValid("()");
   system("pause");
}
bool isValid(string s) {
        stack<int> mystack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['||s[i]=='('||s[i]=='{'){
                cout<<s[i];
                mystack.push(s[i]);
            }
            else if(s[i]==']'){
                if(mystack.empty()||mystack.top()!='[') return false;
                else mystack.pop();
            }
            else if(s[i]==')'){
                if(mystack.top()!='('||mystack.empty()) return false;
                else mystack.pop();
            }
            else if(s[i]=='}'){
                if(mystack.top()!='{'||mystack.empty()) return false;
                else mystack.pop();
            }
            else return false;
        }
        return mystack.empty();
        
    }