#include <bits/stdc++.h>
using namespace std;
void lead(int a[],int n){
    int res=n-1;
    cout<<a[res];
    for(int i=n-1;i>=0;i--){
        if(a[i]>a[res]){
            res=i;
            cout<<a[res]<<" ";
        }
        
    }
}
int main(){
int n,opt;
cout<<"\nenter size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
lead(arr,n);
}
