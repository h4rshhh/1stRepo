#include <iostream>
using namespace std;

void sort012(int *arr, int n){
    int count0=0,count1=0,count2=0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else if(arr[i] == 2){
            count2++;            
        }
    }
    int i = 0;
    while(i<count0){
        arr[i] = 0;
        i++;
    }
    int j = 0;
    while(j<count1){
        arr[i]=1;
        i++;
        j++;
    }
    j = 0;
    while(j<count2){
        arr[i] = 2;
        i++;
        j++;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array with 0s,1s and 2s: "<<endl;
    

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    sort012(arr,n);

    cout<<"Sorted array: "<<endl;

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
