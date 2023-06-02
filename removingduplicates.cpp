#include <cstring>
void removeConsecutiveDuplicates(char input[]) {
    int n = strlen(input);
    char arr[n];
    int k = 0;
    int count = 0;

    for(int i = 0;input[i]!='\0';i++){
        if(input[i]==input[i+1]){
            continue;            
        }
        arr[k] = input[i];
        k++;
        count++;
    }   
    for(int j = 0;j<count;j++){
        input[j] = arr[j];
    }
    input[count] = '\0';

}
