//min consecutive flips binary array
//ip=1,1,0,0,0,1 op=from 2 to 4(only 1 flip req)
//the 2nd group is the one to be flipped every time
#include <bits/stdc++.h>
using namespace std;
void qn(int a[],int n){
int hit=a[0]; 
int check,flip=0;
for(int i=1;i<n;i++){
    if(a[i]!=hit&&flip==0){
        cout<<"from "<<i<<" to ";
        flip=1;
    }
    else if(a[i]==hit&&flip==1){
        cout<<i-1;
        flip=0;
    }
}
if(a[n-1]!=hit)
cout<<n-1;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
qn(a,n);
}
