//using the a1,a2, assume everything is sorted and zeroes at end, then when new element encountered
//swap it with count, count was keeping track of all non 0 elements
void zeroestoend(int a[],int n){
int count=0;
  for(int i=0;i<n;i++){
  if(a[i]!=0){
  swap(a[count],a[i]);
    count++;
  }
  }
}
