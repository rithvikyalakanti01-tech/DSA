#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void linsearch(int x,vector<int> &arr){
    int n=arr.size();
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element found at "<<i<<" position";
            found=true;
            break;
        }
    }
    if(!found){cout<<"Element not found";}
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    linsearch(3,arr);
}