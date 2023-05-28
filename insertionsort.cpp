#include <iostream>
using namespace std;

void insertionSort(int input[], int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key = input[i];
        j = i-1;
        while(j>=0 && input[j]>key){
            input[j+1] = input[j];
            j--;
        }
        input[j+1] = key;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int input[size];
    cout<<"Enter the elements of the array: "<<endl;
    
    for(int i = 0;i<size;i++){
        cin>>input[i];
    }
    insertionSort(input,size);
    
    cout<<"Sorted Array: "<<endl;
    for(int k = 0;k<size;k++){
        cout<<input[k]<<" ";
    }
    
    return 0;
}
