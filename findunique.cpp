#include <iostream>
using namespace std;

int findUnique(int *arr, int size){
    int i = 0, temp;
    while(i<size){
        temp = arr[i];
        int count = 0;
        for(int j = 0;j<size;j++){
            if(j==i){
                continue;
            }
            if(temp == arr[j]){
                count++;                
            }
        }
        if(count ==0){
            return temp;
        }
    i++;        
    }
}

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    int ans = findUnique(arr,size);

    cout<<ans;

    return 0;
}
