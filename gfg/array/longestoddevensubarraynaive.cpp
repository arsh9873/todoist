//longest odd even subarray
//checks for every i element what is the longest possible odd even,as soon as chain breaks break the loop and ++i
#include <bits/stdc++.h>
using namespace std;
int qn(int a[],int n){
int res,curr;
res=1;
for(int i=0;i<n;i++){
curr=1;
    for(int j=i+1;j<n;j++){
    if((a[j]%2==0&&a[j-1]%2!=0)||(a[j]%2!=0&&a[j-1]%2==0))
    curr++;
    else
    break;
    }
res=max(curr,res);    
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
