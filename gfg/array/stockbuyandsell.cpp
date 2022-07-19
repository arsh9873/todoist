//we buy stocks at bottom and sell at peak, so max profit possible is when we add all instances where the stock price was going up together
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int maxprofit(int a[],int n){
int profit=0;
for(int i=1;i<n;i++)    
    if(a[i]>a[i-1])
        profit+=a[i]-a[i-1];
return profit;        
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<endl<<maxprofit(a,n);
}
