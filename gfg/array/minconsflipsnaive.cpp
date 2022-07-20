//min consecutive flips binary array
//ip=1,1,0,0,0,1 op=from 2 to 4(only 1 flip req)
//
#include <bits/stdc++.h>
using namespace std;
void qn(int a[],int n){
    int g1=0,g0=0;
    for(int i=1;i<n;i++){
        if(a[i]==1){
            if(a[i-1]!=1)
                g0++;
        }
        else if(a[i]==0){
            if(a[i-1]!=0)
                g1++;
        }
    }
    if(a[n-1]==0)
        g0++;
    else if(a[n-1]==1)
    g1++;//counted the groups
int check,flip=0;
if(g1>g0)
check=0;//number with least groups should be flipped
else
check=1;
for(int i=0;i<n;i++){
    if(a[i]==check&&flip==0){
    cout<<"from "<<i<<"to ";//printing the results
    flip=1;
    }
    else if(a[i]!=check&&flip==1){
    cout<<i-1;
    flip=0;
    }
}
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
