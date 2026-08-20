#include <iostream>
#include <vector>
using namespace std;
bool isPalinnumb(int x){
    if (x<0 || (x%10==0 && x!=0))
    return false;
    int rev=0;
    while(rev<x){
        rev=(rev*10)+(x%10);
        x/=10;
    }
    return rev==x || x==rev/10;
}
bool isPalinArray(vector<int> &arr) {
        for(int &x:arr){
            if(!isPalinnumb(x)){return false;}
        }
        return true;
        
    }
int main(){
    vector<int> arr={111,222,334};
    isPalinArray(arr)?cout<<"Palindrome":cout<<"No";
}