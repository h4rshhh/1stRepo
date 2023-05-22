int duplicateNumber(int *arr, int size){

    int i = 0, temp;
    while(i<size){
        temp = arr[i];
        int count = 0;
        for(int j = 0;j<size;j++){
            if(j==i){
                continue;
            }
            if(temp == arr[j]){
                count++;                
            }
        }
        if(count ==1){
            return temp;
        }
    i++;        
    }
}
