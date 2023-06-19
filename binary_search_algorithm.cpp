#include <iostream>
using namespace std;

int helper_func(int arr[],int si,int ei,int x){
    int midIndex = (si+ei)/2;
    if(si>ei){
        return -1;
    }

    if(arr[midIndex]==x){
        return midIndex;
    }
    if(arr[midIndex]>x){
        return helper_func(arr,si,midIndex-1,x);
    }
    else{
        return helper_func(arr,midIndex+1,ei,x);
    }

}

int binarySearch(int arr[],int size,int x){
    int si = 0,ei = size-1;
    return helper_func(arr,si,ei,x);
}

int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter sorted array: "<<endl;
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target integer: "<<endl;
    cin>>target;

    cout<<"Index: "<<binarySearch(arr,size,target)<<endl;


    return 0;
}
