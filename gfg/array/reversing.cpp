void reverse(int a[],int n){
int high,low;
  low=0,high=n-1;
  while(low<high){
  swap(a[low],a[high]);
    high++;
    low--;
  }
}
