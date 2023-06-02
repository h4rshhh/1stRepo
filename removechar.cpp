#include <cstring>
void removeAllOccurrencesOfChar(char input[], char c){
    int n = strlen(input);
    int k = 0;
    char arr[n];

    for(int i=0;i<n;i++){
        if(input[i]!=c){
            arr[k] = input[i];
            k++;            
        }
    }

    for(int j = 0;j<k;j++){
        input[j] = arr[j];
    }
    input[k] = '\0';
}
