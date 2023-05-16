#include <iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int a,i;

    for(i = 1;;i++){
        a = i*i;
        if(a>=n){
            break;
        }
    }
    if(a==n){
        cout<<i;
    }
    else{
    cout<<i-1;
    }
    return 0;
}
