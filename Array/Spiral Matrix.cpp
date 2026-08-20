#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> mat={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> res;
    int top=0,left=0,bottom=3,right=3;
    while (top <= bottom && left <= right) {

        // store top row from left to right
        for (int i = left; i <= right; ++i) {
            res.push_back(mat[top][i]);
        }
        top++;

        // store right column from top to bottom
        for (int i = top; i <= bottom; ++i) {
            res.push_back(mat[i][right]);
        }
        right--;

        // store bottom row from right to left (if exists)
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                res.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // store left column from bottom to top (if exists)
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                res.push_back(mat[i][left]);
            }
            left++;
        }
    }
    for(int &x:res){cout<<x<<' ';}    
    return 0;
}