#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if(n==0){
        return 0;
    }
    int sum = n%10 + sumOfDigits(n/10);
    return sum;
}

int main(){
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
  
  cout<<"Sum of digits: "<<sumOfDigits(n);
  return 0
]


