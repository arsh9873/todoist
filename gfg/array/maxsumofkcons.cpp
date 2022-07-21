//find max sum of k consecutive elements
//1 8 30 -5 20 k=3
//op 45
//this technique also works for the question
//given a sum and key k, check if a subarray exists with the given sum
int fn(int a[],int n){
    int k;
    cin>>k;
    int res,curr;
    curr=0;
    res=0;
    for(int i=0;i<k;i++)
    curr+=a[i];
    res=curr;
    for(int i=k;i<n;i++){//windows sliding technique
        curr+=a[i];//subtract last element from sum and add the newest one from array
        curr-=a[i-k];
        res=max(res,curr);
    }
    return res;
}
