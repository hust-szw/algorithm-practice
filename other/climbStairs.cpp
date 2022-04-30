/*
70. ��¥��
������������¥�ݡ���Ҫ n ������ܵ���¥����

ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�

ע�⣺���� n ��һ����������
*/
#include <iostream>
#include<ctime>
using namespace std;
int climbStairs(int n);
int climbStairs_p(int n);

int main(){
    clock_t startTime,endTime;
    startTime= clock();
    climbStairs(50);
    endTime =clock();
    cout<<"�ݹ鷽����ʱ"<<(double)(endTime - startTime) / CLOCKS_PER_SEC<<"s"<<endl;
    startTime= clock();
    climbStairs_p(50);
    endTime =clock();
    cout<<"�ǵݹ鷽����ʱ"<<(double)(endTime - startTime) / CLOCKS_PER_SEC<<endl;
    system("pause");
}
//�ݹ鷽��
int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        return climbStairs(n-1)+climbStairs(n-2);
    }


//�ǵݹ鷽��
int climbStairs_p(int n){
    int numof[n+1];
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(n==2) return 2; 
    else{
        numof[0]=0;
        numof[1]=1;
        numof[2]=2;
        for(int i=3;i<=n;i++){
            numof[i] = numof[i-1]+numof[i-2];
        }
        return numof[n];
    }
    
}