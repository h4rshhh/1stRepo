void reverseEachWord(char input[]) {
    int si = 0,ei = 0;
    int i;

    for(i = 0;input[i]!='\0';i++){
        if(input[i]==32  || input[i]=='\0'){
            ei = i-1;
            while (si <= ei) {
              int temp = input[si];
              input[si] = input[ei];
              input[ei] = temp;
              si++;
              ei--;
            }
            si = i + 1;   
        }             
    }
    ei = i-1;

    while (si <= ei) {
      int temp = input[si];
      input[si] = input[ei];
      input[ei] = temp;
      si++;
      ei--;
    }
}
