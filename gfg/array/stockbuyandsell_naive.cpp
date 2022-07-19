//very complex solution even though it says naive
//ip=1,5,3,1,2,8
//op=11(4+7)
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int maxprofit(int a[],int start,int end){
if(end<=start)
return 0;
int profit=0;//this will hold the max profit from all values of i.
for(int i=start;i<end;i++)
    for(int j=i+1;j<=end;j++)
        if(a[i]<a[j]){
        int currprofit=a[j]-a[i]+maxprofit(a,start,i-1)+maxprofit(a,j+1,end);
        profit=max(currprofit,profit);
        }
return profit;        
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<endl<<maxprofit(a,0,n-1);
}
