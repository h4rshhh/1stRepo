void arrange(int *arr, int n){
    int pos = 0;
    int i = 1;
    while(i<=n){
        arr[pos] = i;
        i+=2;
        pos++;
    }
    int j = n;
    if(j%2!=0){
        j--;
    }
    while(j>=2){
        arr[pos] = j;
        j-=2;
        pos++;
    }
}
