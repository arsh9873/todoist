//maximum sum of a subarray
//max of (max normal subarray sum,max circular subarray sum)
//max circular only calculated by removing the lowest subarray from total array sum
#include <bits/stdc++.h>
using namespace std;
int normalmax(int a[],int n){
    int res,curr;
    curr=a[0];
    res=curr;
    for(int i=1;i<n;i++){
        curr=max(curr+a[i],a[i]);
        res=max(res,curr);
    }
return res;    
}
int qn(int a[],int n){
int res,normalsum,circsum;
normalsum=normalmax(a,n);
if(normalsum<0)
return (normalsum);
int arrsum=0;
for(int i=0;i<n;i++){
    arrsum+=a[i];//getting the array sum
    a[i]=-a[i];//inverting the elements in one go
}
circsum=arrsum+normalmax(a,n);//max of inverted=min of orignal,adding cause --=+
res=max(circsum,normalsum);
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
