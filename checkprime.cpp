#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    bool divided = false;
    int d = 2;    
    while(d<n){
        if(n%d==0){
            divided = true;
            break;
        }
        d++;
    }
    if(divided == true){
        cout<<"Not prime"<<endl;
    }
    else{
        cout<<"Prime";
    }










    return 0;
}