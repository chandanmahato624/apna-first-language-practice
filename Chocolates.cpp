#include<iostream>
using namespace std;
int chocolates(int n){
    int k=n;
    int l;
    while(n>=0){
        l   = n/3;
        k += l;
        n = l;
    }
    return k;
}
int main(){
    int n;
    cout<<"Enter the number of chocolates :";
    cin>>n;
    cout<<chocolates(n);
}