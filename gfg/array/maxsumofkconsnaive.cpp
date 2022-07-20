//for each element add to it the following k elements and then max sum
int qn(int a[],int n){
    int k,curr=0,res=0;
    cin>>k;
    for(int i=0;i<(n-k+1);i++){
        curr=0;
        for(int j=i,cnt=0;cnt<k;j++,cnt++)
        curr+=a[j];
        res=max(curr,res);
    }
    return res;
}
