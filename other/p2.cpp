#include <iostream>
#include <vector>
#include <string>

using namespace std;
int string_to_int(string s);
int main(){
    vector<int> nums;
    vector<int> steps;
    string s = "12";
    getline(cin,s);
    int i= 0,j=0;
    for(i = 0; i < s.length();i++){
        if(s[i] == ' ') {
            nums.push_back(string_to_int(s.substr(j,i-j)));
            j = i+1;
        }
    }
    nums.push_back(string_to_int(s.substr(j,i-j)));
    int min_step = INT16_MAX;

    for(int i = 1;i < nums.size()/2;i++){
        int pos = i;
        int step = 1;
        while(true){
            step++;
            pos +=  nums[pos];
            if(pos == nums.size()-1)  {
                min_step = min(step,min_step);
            }
            if(pos > nums.size()) break;
        }
    }
    cout << min_step;
    system("pause");
    return 0;
}

int string_to_int(string s){
    if(s.empty()) return 0;
    int num = s[0] - '0';
    for(int i = 1; i <s.length() ;i++){
        num = num*10+s[i]-'0';
    }
    return num;
}