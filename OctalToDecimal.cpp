#include<iostream>
using namespace std;
int Octaltodecimal(int n){
   
   int ans = 0, x=1;
    while (n>0)
    {
      int  k = n%10;
        ans += k*x;
        x *= 8;
        n /= 10;

    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the octal number:";
    cin>>n;
    cout<<Octaltodecimal(n);
}