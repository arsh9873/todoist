//res only increments when it finds unique element not equal to res-1, and then puts that equal to res.
int remduplicateformsorted(int a[],int n){
int res=1;
  from(int i=1;i<n;i++)
    if(a[i]!=a[res-1]){
    a[res]=a[i];
      res++;
    }
}
