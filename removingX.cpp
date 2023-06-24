void removeX(char input[]) {
    if(input[0]=='\0'){
        return;
    }
    removeX(input+1);

    if(input[0]!='x'){
        return;
    }

    else{
        int i = 1;
        for(;input[i]!='\0';i++){
            input[i-1] = input[i];
        }
        input[i-1] = input[i];     
    }    

}
