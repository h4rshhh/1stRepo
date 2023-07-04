int pairSum(int *arr, int n, int num){
    if(n==0 || n==1){
        return 0;
    }
    int count = 0;
    for(int i = 1;i<n;i++){
        if(num-arr[0]==arr[i]){
            count++;
        }
    }
    int var = pairSum(arr+1,n-1,num);
    return count + var;
}
