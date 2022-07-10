#include <bits/stdc++.h>
using namespace std;
void rev(int a[],int n){
int shift,tcount=0;
cout<<"\nenter shift number";
cin>>shift;
shift=shift%n;
int temp[shift];
for(int i=0;i<shift;i++)
temp[i]=a[i];
for(int i=shift;i<n;i++){
    int j=i;
    while(j>0+tcount){
        a[j-1]=a[j];
        j--;
    }
    tcount++;
}
for(int i=tcount,k=0;i<n;i++,k++){
a[i]=temp[k];
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
int main(){
int n,x;
cout<<"\nenter size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
rev(arr,n);
}
