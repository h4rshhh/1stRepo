#include <iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int min,minIndex;
        min = arr[i];
        for(int j = i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIndex = j;                
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;        
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;

    for(int i = 0;i<n;i++){
        cin>>arr[i];        
    }
    sort(arr,n);

    for(int k = 0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}
