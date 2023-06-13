#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of 2-D array: "<<endl;    
    cin>>m>>n;

    //Creation 
    int** p = new int*[m];     
    for(int i = 0;i<m;i++){
        *(p+i) = new int[n];
    }

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>p[i][j];            
        }
    }

    cout<<"Array is: "<<endl;

    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;

    }
    //Deleting the memory
    for(int i = 0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
        

    return 0;
}
