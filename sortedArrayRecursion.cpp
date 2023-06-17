#include <iostream>
using namespace std;
bool sortedArray(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    bool isSorted = sortedArray(arr + 1,n-1);
    
    return isSorted;
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the Array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = sortedArray(arr,n);
    if(ans){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }

    return 0;
}
