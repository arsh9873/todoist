bool sortcheck(int a[],int n){
for(int i=0;i<n-1;i++)
  if(a[i]>=a[i+1])
     return false;

return true;
}
