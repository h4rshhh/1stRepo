#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int bin;
	cin>>bin;

	int sum = 0;
	int count = 0;
	while(bin>0){
		int r = bin%10;		
		sum = sum + r*pow(2,count);
		count++;
		bin = bin/10;
	}

	cout<<sum;
	
	
}
