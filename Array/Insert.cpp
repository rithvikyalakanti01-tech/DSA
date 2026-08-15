#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void insbeg(int x,vector<int> &arr){
    for(int i=arr.size()-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
}
void inspos(int x,int pos,vector<int> &arr){
    int n=arr.size();
    for(int i=arr.size()-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
}
void insend(int x,vector<int> &arr){
    arr.push_back(x);
}
int main(){
    vector<int> arr(10);
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    insbeg(0,arr);
    inspos(4,5,arr);
    for(int &x:arr){
        cout<<x<<'\t';
    }
}