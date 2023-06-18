//This program returns the Index of the target integer present in the array and returns -1 is the number is not present.

#include <iostream>
using namespace std;

int search_index(int arr[],int size,int x){
    if(size==0){
        return -1;
    }
    if(arr[0]==x){
        return 0;
    }

    int var = search_index(arr + 1,size-1,x);
    
    if(var == -1){
        return -1;
    }
    else{
        return var + 1; //Why (var + 1)? => Because we are calling the function on array of size-1 so the returned index will be +1
    }


}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int input[n];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i = 0;i<n;i++){
        cin>>input[i];
    }

    int target;
    cout<<"Enter the target integer: "<<endl;
    cin>>target;

    cout<<search_index(input,n,target)<<endl;


    return 0;
}
