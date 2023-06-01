#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m;
	cin>>n;

	int arr[m][n];
	
	//Taking input
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			cin>>arr[i][j];
		}
	}		

	//Printing sum	
	for(int i = 0;i<n;i++){
		int sum = 0;
		for(int j = 0;j<m;j++){
			sum = sum + arr[j][i];
		}
		cout<<sum<<" ";
	}  
}


