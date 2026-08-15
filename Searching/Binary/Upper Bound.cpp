#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lowerbound(int x,vector<int> &arr){
    int l=0;
    int r=arr.size()-1;
    int ans=0;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]>x){
            ans=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={2,3,7,10,11,11,25};
    int target=25;
    cout<<lowerbound(target,arr);

}