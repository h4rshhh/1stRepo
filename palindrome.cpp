#include <iostream>
using namespace std;

bool checkPalindrome(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0' ;i++){
        count++;
    }

    int j  = 0;   
    while(j<=count - j -1){
        if(str[j] != str[count-j-1]){
            return false;
        }
        j++;
    }

    return true;
}

int main(){
    char str[100];
    cout<<"Enter the string to check palindrome: "<<endl;
    cin>>str;

    int ans = checkPalindrome(str);
    if(ans == 1){
        cout<<"Yes , this is a Palindrome";
    }
    else if(ans == 0){
        cout<<"No, this is not a Palindrome.";        
    }
}
