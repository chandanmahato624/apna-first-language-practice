#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cout<<"Enter number of size :";
    cin>>n;
    float x[100],y[100],point;
    for(int i=0; i<n; i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"]=";
        cin>>y[i];
    }
    cout<<"Enter the interpolation point :";
    cin>>point;
}