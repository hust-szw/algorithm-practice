/*
904. ˮ������
������̽��һ��ũ����ũ����������ֲ��һ�Ź�������Щ����һ���������� fruits ��ʾ������ fruits[i] �ǵ� i �����ϵ�ˮ�� ���� ��

����Ҫ�����ܶ���ռ�ˮ����Ȼ����ũ���������趨��һЩ�ϸ�Ĺ�أ�����밴��Ҫ���ժˮ����

��ֻ�� ���� ���ӣ�����ÿ������ֻ��װ ��һ���� ��ˮ����ÿ�������ܹ�װ��ˮ������û�����ơ�
�����ѡ������һ������ʼ��ժ�������� ÿ�� ����������ʼ��ժ�������� ǡ��ժһ��ˮ�� ����ժ��ˮ��Ӧ�����������е�ˮ�����͡�ÿ��ժһ�Σ��㽫�������ƶ�����һ��������������ժ��
һ�����ߵ�ĳ����ǰ����ˮ�����������ӵ�ˮ�����ͣ���ô�ͱ���ֹͣ��ժ��
����һ���������� fruits ������������ռ���ˮ���� ��� ��Ŀ��
*/

#include "toolsfunc.h"
using namespace std;

int totalFruit(vector<int>& fruits) {
    int left = 0, right = 0, sum = 0,maxsum = INT16_MIN;
    int fruit1 = -1,fruit2 = -1;
    while(right < fruits.size()){
        if(fruits[right] == fruit1 || fruits[right] == fruit2 ){
            right++;
            sum++;
            maxsum = max(maxsum,sum);
        }
        else {
            if (fruit1 == -1){
                fruit1 = fruits[right++];
                sum++;
                maxsum = max(maxsum,sum);
            }
            else if (fruit2 == -1){
                fruit2 = fruits[right++];
                sum++;  
                maxsum = max(maxsum,sum);
            }
            else{
                left = right - 1;
                if(fruits[left] == fruit1) fruit2 = fruits[right];
                else fruit1 = fruits[right];
                while(fruits[left - 1] == fruits[left]) left--;
                sum = right - left + 1;
                right ++;
                maxsum = max(maxsum,sum);
            }
        }
    }
    return maxsum;
}

int main(){
    vector<int> fruits = {0,1,2,2};
    cout << totalFruit(fruits);
    system("pause");
}