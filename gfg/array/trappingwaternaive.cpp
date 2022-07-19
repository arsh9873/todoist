//left and rightmost have no water on top,middle bars can store minimum of lmax and rmax bar - their own height
#include <bits/stdc++.h>
using namespace std;
int qn(int a[],int n){
int total=0,lmax,rmax;
for(int i=1;i<n-1;i++)
{
    lmax=a[i];
    
    for(int j=0;j<i;j++)
    lmax=max(lmax,a[j]);//for condition where the talles bar is in the middle
    for(int j=i+1;j<n;j++)
    rmax=max(rmax,a[j]);
total+=min(lmax,rmax)-a[i];
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
