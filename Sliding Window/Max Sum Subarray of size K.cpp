#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={100,200,300,400};
    int k=2;
    int a=0,ans=0;
    for(int i=0;i<k;i++){a+=arr[i];}
    ans+=a;
    for(int i=1;i+k<=arr.size();i++){
        a-=arr[i-1];
        a+=arr[i+k-1];
        ans=max(a,ans);
    }
    cout<<ans;
    return 0;
}