#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array size :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        int count = arr[i];
        int j=arr[i-1];
        while(arr[j]>count && i>=0){
            count = arr[j];
            arr[j]=arr[j+1];
            j--;
        }
        count = arr[j+1];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        // its not complete
    }
}