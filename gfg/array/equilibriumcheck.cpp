//time complexity O(n)
//space complexity O(1)
//given an array, check whether it has an equilibrium point or not
//solved by caluclating lsum and rsum without an array in a same loop
//rsum=totalsum-a[i]
bool fn(int a[],int n){
int lsum,rsum,totalsum=0;
lsum=0;
for(int i=0;i<n;i++)
totalsum+=a[i];
rsum=totalsum-a[0];
if(lsum==rsum)
return true;
for(int i=1;i<n;i++){
    lsum+=a[i-1];
    rsum=rsum-a[i];
    if(lsum==rsum)
    return true;
}
return false;
}
