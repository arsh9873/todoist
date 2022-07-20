//maximum sum of a subarray
//for each element found all the possible subarrays and then found the max sum of those subarrays
#include <bits/stdc++.h>
using namespace std;
int qn(int a[],int n){
int st,end,curr,res;
cout<<"reached";
res=a[0];
for(st=0;st<n;st++)
    {   
        curr=a[st];
        for(end=(st+1)%n;end!=st;end=(end+1)%n){
        curr+=a[end];
        res=max(curr,res);
        }
        
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
