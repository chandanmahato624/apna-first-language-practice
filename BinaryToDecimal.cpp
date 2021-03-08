#include<iostream>
using namespace std;
int binarytodecimal(int n){
    int ans = 0, x=1;
    while (n>0)
    {
      int  k = n%10;
        ans += k*x;
        x *= 2;
        n /= 10;

    }
    return ans;
    
}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<binarytodecimal(n);
}