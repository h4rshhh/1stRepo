char highestOccurringChar(char input[]){
    int freq[26] = {0};
    int max = 0;
    int n = strlen(input);

    for(int i = 0;i<n;i++){
        freq[input[i]-'a']++;
        if(max<freq[input[i]-'a']){
            max = freq[input[i]-'a'];
        }
    }

    for(int j = 0;j<n;j++){
        if(max == freq[input[j]-'a']){
            return input[j];
        }
    }  

}
