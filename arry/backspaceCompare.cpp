/*
844. �ȽϺ��˸���ַ���
���� s �� t �����ַ����������Ƿֱ����뵽�հ׵��ı��༭�������������ȣ����� true ��# �����˸��ַ���
*/

#include "toolsfunc.h"backspaceCompare
using namespace std;
bool backspaceCompare(string s, string t) {
        stack<char> s_stack;
        stack<char> t_stack;
        for (int i = 0; i < s.length(); i++){
            if (s[i] != '#'){
                s_stack.push(s[i]);
            }
            else {
                if(!s_stack.empty()) s_stack.pop();
            }
        }
        for (int i = 0; i < t.length(); i++){
             if (t[i] != '#'){
                t_stack.push(t[i]);
            }
            else {
                if(!t_stack.empty()) t_stack.pop();
            }
        }
        if (t_stack.size() != s_stack.size()) return false;
        while (!s_stack.empty() || !t_stack.empty()){
            if (s_stack.top() != t_stack.top()) return false;
            else{
                s_stack.pop();
                t_stack.pop();
            }
        }
        return true;
    }
int main(){

}