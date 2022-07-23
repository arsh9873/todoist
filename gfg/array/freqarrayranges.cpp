//given an n sized array of ranges, find the maximum appearing element
//first declare a big array, then set the start of every range in that array as +1
//and where it ends as -1. after that find that big array's prefix sum(summ till a[i] incl a[i]),
//the max value in that big array is on the index with the largest value
//this happens as +1 to mark all that appear and -1 to nullify, then if no common, then 1 for a 
//list and -1 and then 0, but if anything is common it will appear.
int fn(int a[],int b[],int n){
int arr[100]={0},last=0,arrsum=0,arrmax=0;
for(int i=0;i<n;i++){
arr[a[i]]+=1;
arr[b[i]+1]-=1;
}
for(int i=1;i<100;i++){
arr[i]=arr[i]+arr[i-1];
arrmax=max(arr[i],arrmax);
}
for(int i=0;i<100;i++)
    if(arrmax==arr[i])
        return i;
}
