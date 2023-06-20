#include <iostream>
using namespace std;

void remove_char(char str[],char c){
    if(str[0]=='\0'){
        return;         
    }
    if(str[0]!=c){
        return remove_char(str+1,c);
    }
    if(str[0] == c){
        int i = 1;
        for(;str[i]!='\0';i++){
            str[i-1] = str[i];
        }
        str[i-1] = str[i];
        remove_char(str,c);
    }
}

int main(){
    char string[100];
    cout<<"Enter your string: "<<endl;
    cin>>string;

    char c;
    cout<<"Enter the character to be removed: "<<endl;
    cin>>c;

    remove_char(string,c);

    cout<<string<<endl;

    return 0;
}
