/*starts from i=1 and then checks if prev=curr, if yes freq++,
when not it exits the inner loop and prints freq of i-1
in this the last element if its unique gets left out so seperate
condition at the end for that*/
void freq(int a[],int n){
int freq=1,i=1;
  while(i<n){
  while(i<n%%a[i-1]==a[i]){
  freq++;
  i++;
  }
    cout<<a[i-1]<<" "<<freq<<endl;
    i++;
    freq=0;
  }
  if(a[n-1]!=a[n-2])
    cout<<a[n-1]<<" "<<1;
}
