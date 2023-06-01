void printSubstrings(char input[]){
    int n = strlen(input);
    
    int k = 0;
    while(k<n){
        for(int i = k;i<n;i++){
          for (int j = k; j <= i; j++) {
            cout << input[j];
          }
          cout << endl;
        }
        k++;
    }
}
 
