/*
48. 旋转图像
给定一个 n × n 的二维矩阵 matrix 表示一个图像。请你将图像顺时针旋转 90 度。

你必须在 原地 旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要 使用另一个矩阵来旋转图像。

 
*/

#include "toolsfunc.h"
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        for(int index = 0;index < matrix.size()/2;index++){
            for(int j = 0 ;j< matrix.size()-index*2-1;j++){
            int fistnum = matrix[index][index];
            for(int i = index;i<matrix.size()-index-1;i++){
                matrix[i][index] = matrix[i+1][index];
            }
            for(int i = index;i<matrix.size()-index-1;i++){
                matrix[matrix.size()-index-1][i] = matrix[matrix.size()-index-1][i+1];
            }
            for(int i = matrix.size()-index-1;i>index;i--){
                 matrix[i][matrix.size()-index-1] = matrix[i-1][matrix.size()-index-1];
            }
            for(int i = matrix.size()-index-1;i>index+1;i--){
                 matrix[index][i] = matrix[index][i-1];
            }
            matrix[index][index+1] = fistnum;
            }
        }
    }
int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    for(auto a : matrix){
        for (auto c : a ){
            cout << c <<" ";
        }
        cout << endl;
    }
    system("pause");
}