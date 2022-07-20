//find majority element,print its index,-1 if no majority
//majority=appears more than n/2 times in the array
//done using moore's algorithm
//https://upload.wikimedia.org/wikipedia/commons/thumb/c/c7/Boyer-Moore_MJRTY.svg/1024px-Boyer-Moore_MJRTY.svg.png
#include <bits/stdc++.h>
using namespace std;
int findmajority(int a[],int n){//finding the majaority-phase 1
    int res=0,count=1;
    for(int i=1;i<n;i++){       
        if(a[i]==a[res])
            count++;
        else
            count--;
        if(count==0){
            res=i;
            count=1;
        }
}
return res;
}
int qn(int a[],int n){
    int res,count=0;
    res=findmajority(a,n);
    for(int i=0;i<n;i++)
    if(a[i]==a[res])
        count++;
    if(count<n/2)
    res=-1;
return res;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<qn(a,n);
}
