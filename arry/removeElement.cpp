/*
27. �Ƴ�Ԫ��
����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�

��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣

Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
*/

#include "toolsfunc.h"
using namespace std;
//�����ⷨ
// int removeElement(vector<int>& nums, int val) {
//     int len = nums.size();
//     for(int i = 0; i < len; i++){
//         if(nums[i] == val){
//             for(int j = i; j < len - 1; j++){
//                 nums[j] = nums[j + 1];
//             }
//             len--;
//         } 
//     }
//     return len;
// }

//˫ָ�뷨
int removeElement(vector<int>& nums, int val){
    // lowIndex ��ʾ��һ��������ֵ��λ�á�
    // fastIndex ��ʾ��һ�����������Ԫ��λ�á�
    int slowIndex = 0,fastIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++){
        if (nums[fastIndex] != val){
            nums[slowIndex++] = nums[fastIndex]; 
        }
    }
    return slowIndex;
}
int main(){

}