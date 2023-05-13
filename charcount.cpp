#include <iostream>
using namespace std;
int main(){ 
    char c;
    c = cin.get();
    int count = 0, charcount = 0, digcount = 0, spacecount = 0;
    while(c!='$'){  
        count++;
        if(c>96 && c<123){
            charcount++;
        }
        else if(c>47 && c<58){
            digcount++;
        }
        else if(c == 32 || c == 10){
            spacecount++;
        }      
        c = cin.get();
        
    }
    cout<<charcount<<" "<<digcount<<" "<<spacecount;

    return 0;
}
