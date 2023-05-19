#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the integer you want to search in the Array: ";
    cin>>x;

    int count = 0;
    for(int i = 0;i<n;i++){
        if(x==arr[i]){
            count++;
            cout<<"Index of at which the integer is present: "<<i;
        }
    }

    if(count == 0){
        cout<<"The given integer in not in the Array";
    }

    return 0;
}
