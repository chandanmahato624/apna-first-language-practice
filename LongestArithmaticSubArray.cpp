#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Size :";
    cin>>n;
    int arr[n];
    cout<<"Enter all values :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j] && arr[i]>arr[i+1]){
                cout<<"Record breaking day  :"<<arr[i]<<endl;
            }
        }
    }
}