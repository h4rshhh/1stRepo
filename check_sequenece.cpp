#include <cstring>
bool checksequenece(char large[] , char*small) { 
    if(strlen(small)==0){
        return true;
    }

    bool ans = false;

    for(int i = 0;i<strlen(large);i++){
        if(large[i]==small[0]){
            ans = checksequenece(large+i+1,small+1);            
            break;
        }

    }

    return ans;

}
