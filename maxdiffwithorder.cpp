#include <bits/stdc++.h>
using namespace std;
//max value of aj-ai (j>i)
//sol:using the a1,a2..ai-1 thing,
//if ai is bigger than the max so far then the maxdiff will be higher,
//if its not bigger then check if its lower than min, the max diff stays same but in future
//if max changes then maxdiff will be diff
void fn(int a[],int n){
int min=0,max=0,maxdiff;
for(int i=1;i<n;i++){
    if(a[i]>=a[max]){
        max=i;
        maxdiff=a[max]-a[min];
    }
    else{
        if(a[i]<=a[min])
        min=i;
    }
}
cout<<maxdiff;
}
int main(){
int n,opt;
cout<<"\nenter size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
fn(arr,n);
}
