#include <iostream>
using namespace std;

bool isPrime(int n){    
    int d = 2;
    while(d<n){
        if(n%d==0){
            return false;
        }
        d++;
    }
    return true;
}

int main(){ 
    int n;
    cin>>n;
   
    if(isPrime(n)==0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }    

    return 0;
}
