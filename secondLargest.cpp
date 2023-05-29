#include <iostream>
using namespace std;

int findSecondLargest(int input[], int n){
    if(n<2){
        return -2147483648;
    }
    int count = 0;
    for(int i = 0;i<n-1;i++){
        if(input[i] == input[i+1]){
            count++;
        }        
    }
    if(count == n-1){
        return -2147483648;
    }
    int largest = input[0],secondlargest = -2147483648;
    for(int i = 1;i<n;i++){
        if(largest <input[i]){
            secondlargest = largest;
            largest = input[i];
        }
        else if(secondlargest <input[i] && input[i]!=largest){
            secondlargest  = input[i];
        }
    }
    return secondlargest;        
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int input[n];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i = 0;i<n;i++){
        cin>>input[i];
    }

    int ans = findSecondLargest(input,n);

    cout<<ans;
    
    return 0;
}
