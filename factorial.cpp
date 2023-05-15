//To find nCr --> n!/[r!(n-r)!]
#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i = 1;i<=n;i++){
        ans = ans*i;       
    }
    return ans;    
}


int main(){ 
    int n,r;
    cin>>n>>r;

    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);

    cout<<a/(b*c);    
    return 0;
}
