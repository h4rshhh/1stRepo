void rotate(int *input, int d, int n){
    int arr[n];
    int k = 0;
    for(int i = d;i<n;i++){
        arr[k] = input[i];
        k++;
    }
    for(int j = 0;j<d;j++){
        arr[k] = input[j];
        k++;
    }

    for(int i = 0;i<n;i++){
        input[i] = arr[i];
    }
}
