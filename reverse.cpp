#inlcude <iostream>
using namespace std;

void reverseStringWordWise(char input[]){
    int count = 0;
    for(int i = 0;input[i]!='\0';i++){
        count++;
    }
    int j = count-1,i = 0;
    while(i<j){
        int temp = input[j];
        input[j] = input[i];
        input[i] = temp;
        i++;
        j--;
    }    
    int start = 0,end;
    for(int i = 0;i<=count;i++){
        if(input[i] == 32 || input[i] =='\0'){
            end = i - 1;
            while(start<end){
                int temp = input[start];
                input[start] = input[end];
                input[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main(){
    char input[100];
    cout<<"Enter the sentence to be reversed: "<<endl;
    cin.getline(input,100);

    reverseStringWordWise(input);
    cout<<"Reversed sentence:"<<endl;
    cout<<input;


    return 0;
}
