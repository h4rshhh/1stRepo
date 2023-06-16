#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    int var = factorial(n-1);
    return n*var;
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int sol = factorial(n);
    cout<<"Factorial: "<<sol<<endl;

    return 0;
}
