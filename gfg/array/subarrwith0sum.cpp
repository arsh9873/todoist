//check if a subarray with 0 sum exists
//works on the fact that a subarray with 0 sum exists if a prefix sum repeats or is 0
int fn(int a[],int n){
int pref[n];
map<int,int> same;
pref[0]=a[0];
for(int i=1;i<n;i++){
    pref[i]=pref[i-1]+a[i];
if(pref[i]==0)
return true;
}
sort(pref,pref+n);
for(int i=1;i<n;i++){
    if(pref[i]==pref[i-1]){
        return true;
    }
}
return false;
}
