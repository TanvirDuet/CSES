#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m=0;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            m=m+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i];

        }
    }
//    cout<<endl;
//    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
//    cout<<endl;
    cout<<m;

}

