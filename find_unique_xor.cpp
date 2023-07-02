#include <iostream>
using namespace std;

//Finding duplicate using Hash mapping
int find_unique(int arr[],int n){
    int sol = arr[0]^arr[1];
    for(int i = 2;i<n;i++){
        sol = sol^arr[i];        
    }
    return sol;
    
}


int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int array[size];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i = 0;i<size;i++){
        cin>>array[i];
    }

    int ans = find_unique(array,size);
    cout<<"Unique element is: "<<ans<<endl;

    return 0;
}
