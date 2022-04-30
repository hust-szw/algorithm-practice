#include <iostream>
#include <vector>
using namespace std;
int main(){
       int h, n, num;
       cin >> h;
       cin >> n;
       vector<int> othersHeight;
       vector<int> othersAbsH;
       for(int i = 0; i < n; i++){
           cin >> num;
           othersHeight.push_back(num);
       }
       for(int i = 0; i < n; i++){
           othersAbsH.push_back(abs(othersHeight[i] - h));
       }

       for(int i = 0; i < n; i++){
           for(int j = 0; j < n - i - 1; j++){
               if(othersAbsH[j] > othersAbsH[j+1] ){
                   othersAbsH[j+1] = othersAbsH[j+1] + othersAbsH[j];
                    othersAbsH[j] = othersAbsH[j+1] - othersAbsH[j];
                    othersAbsH[j+1] = othersAbsH[j+1] - othersAbsH[j];

                    othersHeight[j+1] = othersHeight[j+1] + othersHeight[j];
                    othersHeight[j] = othersHeight[j+1] - othersHeight[j];
                    othersHeight[j+1] = othersHeight[j+1] - othersHeight[j];
               }
           }
       } 
       for (int i = 0; i < n-1; i++){
           if(othersAbsH[i] == othersAbsH[i+1] && othersHeight[i] > othersHeight[i+1]){
                    othersHeight[i+1] = othersHeight[i+1] + othersHeight[i];
                    othersHeight[i] = othersHeight[i+1] - othersHeight[i];
                    othersHeight[i+1] = othersHeight[i+1] - othersHeight[i];
           }
       }  
    for(int i = 0;i < n;i++){
        cout << othersHeight[i]<< " ";
    }
    system("pause");
}
