/*
11. ʢ���ˮ������
���� n ���Ǹ����� a1��a2��...��an��ÿ�������������е�һ����?(i,?ai) ���������ڻ� n ����ֱ�ߣ���ֱ�� i?�������˵�ֱ�Ϊ?(i,?ai) �� (i, 0) ���ҳ����е������ߣ�ʹ��������?x?�Ṳͬ���ɵ�����������������ˮ��

˵�����㲻����б������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/container-with-most-water
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

#include "tools.h"
using namespace std;

int main(){
    
}

int maxArea(vector<int>& height){
    int x=0,y,maxsum=0;
    y= height.size()-1;
    while(x!=y){
        if(min(height[x],height[y])*(y-x)>maxsum) maxsum = min(height[x],height[y])*(y-x);
        if(height[y]>height[x]) x++;
        else y--;
    }
    return maxsum;
}