//print first m n-bonacci numbers
//ip:n=3,m=8
//op:0 0 1 1 2 4 7 13
void fn(){
int currsum=0,m,n;
cin>>n>>m;
int a[m];
for(int i=0;i<n;i++){
    if(i==n-1)
    a[i]=1;
    else
    a[i]=0;
}
currsum=1;
for(int i=n;i<m;i++){
    a[i]=currsum;
    currsum-=a[i-n];
    currsum+=a[i];
}
for(int i=0;i<m;i++)
cout<<a[i]<<" ";
}
