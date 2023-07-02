#include <iostream>
using namespace std;

//Finding duplicate using Hash mapping
int find_unique(int arr[],int n){
    int hash[1000] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int j=0;j<1000;j++){
        if(hash[j]==1){
            return j;
        }
    }
    
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
