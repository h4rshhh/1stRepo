#include <iostream>
using namespace std;

bool check_palindrome(int arr[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]!=arr[size-1]){
        return false;
    }
    int var = check_palindrome(arr+1,size-2);
    return var;
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<check_palindrome(arr,n)<<endl;

}
