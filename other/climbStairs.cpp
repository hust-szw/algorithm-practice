/*
70. 爬楼梯
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

注意：给定 n 是一个正整数。
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
    cout<<"递归方法耗时"<<(double)(endTime - startTime) / CLOCKS_PER_SEC<<"s"<<endl;
    startTime= clock();
    climbStairs_p(50);
    endTime =clock();
    cout<<"非递归方法耗时"<<(double)(endTime - startTime) / CLOCKS_PER_SEC<<endl;
    system("pause");
}
//递归方法
int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        return climbStairs(n-1)+climbStairs(n-2);
    }


//非递归方法
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