#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for(int i = 0;i<n-1;i++){
        int temp;
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Input the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int k = 0;k<n;k++){
        cin>>arr[k];
    }

    bubbleSort(arr,n);

    cout<<"Sorted array:"<<endl;
    for(int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}
