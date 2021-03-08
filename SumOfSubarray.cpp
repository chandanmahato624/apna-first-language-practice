#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Size :";
    cin>>n;
    int arr[n];
    cout<<"Enter array value :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum +=arr[j];
            cout<<sum<<endl; 
        }
    }
}