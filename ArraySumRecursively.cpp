#include <iostream>
using namespace std;

int sum(int input[], int n) {
  if(n==0){
    return 0;
  }
  int ans = input[0] + sum(input+1,n-1);
  return ans;
}

int main(){
  int size;
  cout<<"Enter the size of array: "<<endl;
  cin>>size;
  
  int arr[size];
  cout<<"Enter the array: "<<endl;
  for(int i = 0;i<size;i++){
    cin>>arr[i];
  }
  int sol = sum(arr,size);
  cout<<"Sum of array is:"<<endl<<sol;
  return 0;
}
