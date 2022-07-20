
//longest odd even subarray
//used the idea of kadane algorithm
#include <bits/stdc++.h>
using namespace std;
int qn(int a[],int n){
int res,curr;
res=1;
curr=1;
for(int i=1;i<n;i++){
if((a[i]%2==0&&a[i-1]%2!=0)||(a[i]%2!=0&&a[i-1]%2==0)){
curr++;
res=max(curr,res);
}
else
curr=1;
}
return res;
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
