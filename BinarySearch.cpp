#include<iostream>
using namespace std;
int binarysearch(int n, int arr[], int key){
    int s=0,e=n;
   while(e>=s){
       int mid = (s+e)/2;
       if(arr[mid]==key){
           return mid;
       }else if(arr[mid]>key){
           e = mid-1;
       }else{
           s = mid+1;
       }   
   }  
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter the Array size :";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array value :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key :";
    cin>>key;
    cout<<"The key Point is :"<<binarysearch(n,arr,key);
}