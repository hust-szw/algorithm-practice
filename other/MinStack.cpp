/*
155. 最小栈
设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) —— 将元素 x 推入栈中。
pop() —— 删除栈顶的元素。
top() —— 获取栈顶元素。
getMin() —— 检索栈中的最小元素。
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