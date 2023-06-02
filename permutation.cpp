bool isPermutation(char input1[], char input2[]){
    int arr[128] = {0};

    int len1 = strlen(input1);
    int len2 = strlen(input2);

    if(len1 != len2){
        return false;
    }

    for (int i = 0; i<len1; i++){
        arr[input1[i]]++;
        arr[input2[i]]--;
    }

    for(int i = 0;i<128;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}
