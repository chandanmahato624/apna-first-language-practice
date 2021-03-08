#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}