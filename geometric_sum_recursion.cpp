#include <iostream>
using namespace std;

int pow(int a,int b){
    int ans = 1;
    for(int i = 1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}

double geometricSum(int k) {
    if(k==0){
        return 1.00000;
    }
    double var = 1.00000/(pow(2,k)) + geometricSum(k-1);
    return var;
}

int main(){
    int k;
    cout<<"Enter k: "<<endl;
    cin>>k;

    cout<<"Geometric sum till 1/(2^k) = "<<geometricSum(k)<<endl;

    return 0;
}
