/*
20. ��Ч������
����һ��ֻ���� '('��')'��'{'��'}'��'['��']'?���ַ��� s ���ж��ַ����Ƿ���Ч��

��Ч�ַ��������㣺

�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-parentheses
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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