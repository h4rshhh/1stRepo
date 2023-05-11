#include <iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
        cout<<"*";
        j++;
        }
        int k = 1;
        while(k<=2*(n-i)){
            cout<<" ";
            k++;
        }
        
        j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;        
    }
    i = n - 1;
    while(i>=1){
        int j = i;
        while(j>=1){
            cout<<"*";
            j--;
        }
        int k = n - i;
        while(k>=1){
            cout<<" ";
            k--;
        }
        k = 1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        j = i;
        while(j>=1){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
