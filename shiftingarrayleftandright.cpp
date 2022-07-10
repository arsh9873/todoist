#include <bits/stdc++.h>
using namespace std;
void rev(int a[],int low,int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}
void r(int a[],int n,int opt){
int shift,mid;
cout<<"\nenter shift number";
cin>>shift;
shift=shift%n;
if(opt==1)
mid=shift;
else
mid=n-shift;
rev(a,0,mid-1);
rev(a,mid,n-1);
rev(a,0,n-1);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}
int main(){
int n,opt;
cout<<"\nenter size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"\n1-lr\n2-rr:";
cin>>opt;
switch (opt){
    case 1:r(arr,n,1);
            break;
    case 2:r(arr,n,2);
            break;
    default:break;
}
}
