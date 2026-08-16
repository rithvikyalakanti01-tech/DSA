#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    vector<int> arr={12,-1,-7,8,-15,30,16,28};
    queue<int> q;
    vector<int> ans;
    int k=5;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    if(q.empty()){
        ans.push_back(0);
    }
    else{
        ans.push_back(arr[q.front()]);
    }
    for(int i=k;i<=arr.size()-1;i++){
        if(arr[i]<0){
            q.push(i);
        }
        if (!q.empty() && q.front()<=i-k) {
            q.pop();
        }
        if(q.empty()){
        ans.push_back(0);
    }
    else{
        ans.push_back(arr[q.front()]);
    }
    }
    for(int &x:ans){
        cout<<x<<'\t';
    }
}