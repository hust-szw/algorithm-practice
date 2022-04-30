/*

*/

#include "toolsfunc.h"
using namespace std;

int main(){
       int h, n,num;
       vector<int> nums;
       cin >> n;
       for(int i= 0; i < n;i++){
           cin >> num;
           nums.push_back(num);
           cout << nums[i];
       }
       system("pause");
}
