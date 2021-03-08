#include<bits/stdc++.h>
using namespace std;
int main(){
    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        MaxNo = max(MaxNo,arr[i]);
        MinNo = min(MinNo,arr[i]);
    }
    cout<<MaxNo<<"  "<<MinNo;
}
