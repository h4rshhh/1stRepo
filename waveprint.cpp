void wavePrint(int **input, int nRows, int mCols){
    for(int i = 0;i<mCols;i++){
        int j;
        if(i%2==0){
            j = 0;
            while(j<nRows){
                cout<<input[j][i]<<" ";
                j++;      
            }
        }
        else if(i%2==1){
            j = nRows - 1;
            while(j>=0){
                cout<<input[j][i]<<" ";
                j--;
            }
        }           
    }
}
