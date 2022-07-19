
//2 arrays for lmax and rmax with size n,store both l and rmax for each value of a[i]
#include <bits/stdc++.h>
using namespace std;
int qn(int a[],int n){
    int total=0,rmax[n],lmax[n];
    lmax[0]=a[0];
    rmax[n-1]=a[n-1];
for(int i=1;i<n;i++)
lmax[i]=max(a[i],lmax[i-1]);
for(int i=n-2;i>=0;i--)
rmax[i]=max(a[i],rmax[i+1]);
for(int i=1;i<n-1;i++){
total+=min(lmax[i],rmax[i])-a[i];
}
if(total<0)
total=0;
return total;        
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<endl<<qn(a,n);
}
