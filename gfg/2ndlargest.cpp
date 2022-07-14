//uses a1,a2..ai-1 method 
int 2large(int a[],int n){
int max=0,max2=-1;
  for(int i=0;i<n;i++){
  if(a[i]>a[max]){
    max2=max;
    max=i;
  }
    else if(a[i]!=a[max]){
    if(max2==-1||a[i]>a[max2])
      max2=i;
    }
  }
return max2;
}
