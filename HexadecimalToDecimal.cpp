#include<iostream>
using namespace std;
int hexadecimaltodecimal(string n){
int ans=0, x=1;
int k = n.size();
for(int i=k-1; i>=0; i--){
    if(n[i]>='0' && n[i]<='9'){
        ans += x*(n[i]-'0');
    }else if(n[i]>='A'&& n[i]<='F'){
        ans += x*(n[i]-0)
    }

    }
}
int main(){
    string n;
    cout<<"Enter the Hexadecimal Number :";
    cin>>n;
    cout<<hexadecimaltodecimal(n);
}