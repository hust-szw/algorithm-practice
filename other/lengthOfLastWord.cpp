/*
58.���һ�����ʵĳ���
����һ���ַ��� s�������ɵ�����ɣ�����ǰ����һЩ�ո��ַ������������ַ��������һ�����ʵĳ��ȡ�

���� ��ָ������ĸ��ɡ��������κοո��ַ���������ַ�����
*/
#include <string>
#include <iostream>
using namespace std;
int lengthOfLastWord(string s);
int main(){
   cout<<lengthOfLastWord("a");
    system("pause");
}

    int lengthOfLastWord(string s) {
    int index= s.size()-1;
    int blanklen = 0;
    while(s[index] == ' ' ) index--;
    while(s[index]!=' '&&(index>=0)) {
        index--;
        blanklen++;
        }
    return blanklen;
}