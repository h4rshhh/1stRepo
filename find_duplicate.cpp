int findDuplicate(int *arr, int n){
    int hash[1000000] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int j = 0;j<1000000;j++){
        if(hash[j]==2){
            return j;
        }
    }

}
