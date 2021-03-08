#include<iostream>
using namespace std;
int linearsearch(int n, int arr[],int key){
    for(int i=0; i<n; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter the array size :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key :";
    cin>>key;
    cout<<"The find key position :"<<linearsearch(n,arr,key);
}