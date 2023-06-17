#include <iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  if(size==0){
    return false;
  }
  if(input[0]==x){
    return true;
  }
  bool isPresent = checkNumber(input+1,size-1,x);
  return isPresent;
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

  int x;
  cout<<"Enter the target integer: "<<endl;
  cin>>x;

  bool ans = checkNumber(arr,size,x);

  if(ans){
    cout<<x<<" is present in the array"<<endl;
  }
  else{
    cout<<x<<" is not present in the array"<<endl;
  }

  return 0;
}
