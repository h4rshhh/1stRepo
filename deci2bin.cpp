#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
	if(n == 0){
		cout<<"0";
	}
	else{
	int arr[32];
    int i = 0;
	while(n>0){						
		arr[i] = n%2;
		i++;
		n = n/2;
	}
	for(int j = i-1;j>=0;j--){
		cout<<arr[j];

	}
	} 
    
	
}
