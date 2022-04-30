/*
155. ��Сջ
���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��

push(x) ���� ��Ԫ�� x ����ջ�С�
pop() ���� ɾ��ջ����Ԫ�ء�
top() ���� ��ȡջ��Ԫ�ء�
getMin() ���� ����ջ�е���СԪ�ء�
*/

#include "toolsfunc.h"
using namespace std;

class MinStack {
public:
    vector<int> s;
    vector<int> minnum;
    MinStack() {
        s.clear();
        minnum.clear();
       
    }
    
    void push(int val) {
        s.push_back(val);
        if(minnum.empty()) minnum.push_back(val);
        else if(val<minnum[minnum.size()-1]) minnum.push_back(val);
       
    }
    
    void pop() {
        if(!s.empty()) {
            if(s[s.size()-1]==minnum[minnum.size()-1]) minnum.pop_back();
            s.pop_back();
            }
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    int getMin() {
        return minnum[minnum.size()-1];
    }
};
int main(){
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout<< obj->getMin();
    obj->pop();
    cout<< obj->top();
    cout<<obj->getMin();
    system("pause");
}