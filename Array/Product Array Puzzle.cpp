#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={10,3,5,6,2};
    int n=arr.size();
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    vector<int> ans(n,1);
    for(int i=1;i<n;i++){prefix[i]=prefix[i-1]*arr[i-1];}
    for(int &x:prefix){cout<<x<<'\t';}
    for(int i=n-2;i>=0;i--){suffix[i]=suffix[i+1]*arr[i+1];}
    cout<<'\n';
    for(int &x:suffix){cout<<x<<'\t';}
    cout<<'\n';
}