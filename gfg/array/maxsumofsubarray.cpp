int qn(int a[],int n){
    int res,maxending;
    res=a[0];
    maxending=res;
    for(int i=1;i<n;i++)
    {
        maxending=max(maxending+a[i],a[i]);
        res=max(maxending,res);
    }
return res;        
}
