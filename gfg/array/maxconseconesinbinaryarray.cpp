//max consecutive ones in a binary array
//solved using a1,a2...
#include <bits/stdc++.h>
using namespace std;
int qn(int a[],int n){
    int total=0,prev=0,curr=0;
    for(int i=0;i<n;i++){
    if(a[i]==1)
        {
        curr++;
        total=max(curr,prev);
        }
    else if(a[i]==0){
    prev=curr;
    curr=0;
    }
    }
    
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
