#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array size :",
    cin>>n;
    int arr[n];
    for(int i=0; i>n; i++){
    cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
            arr[i]=arr[j];
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }


}