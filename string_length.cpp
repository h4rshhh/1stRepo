#include <iostream>
using namespace std;

int len(char str[]){
    if(str[0]=='\0'){
        return 0;
    }

    int sol = len(str+1);
    return 1 + sol;
}

int main(){
    char string[100];
    cout<<"Enter your string: "<<endl;
    cin>>string;

    cout<<"length of your string is : "<<len(string);
    
    return 0;
}
