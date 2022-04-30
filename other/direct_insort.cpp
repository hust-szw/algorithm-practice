#include <iostream>
using namespace std;
int *InsertSort(int a[],int n);

int main(){
    int *a;
    a=new int[7];
    for (int i = 1; i < 7; i++)
    {
        cin>>a[i];
    }
    
    int *arr=InsertSort(a,6);
    for(int j=1;j<7;j++)
     cout<<arr[j]<<endl;

    system("pause");
    return 0;
}

int *InsertSort(int a[],int n){
        int i,j;
        for (i=2;i<=n;i++)//第二个数
            if(a[i]<a[i-1]){
                a[0]=a[i];//哨兵:a[0]存放待插入元素
                for(j=i-1;j>0&&a[j]>a[0];--j)
                    a[j+1]=a[j];//往后移动
                a[j+1]=a[0];//复制到待插入位置
            }
            return a;
    }