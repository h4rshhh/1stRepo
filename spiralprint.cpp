void spiralPrint(int **input, int nRows, int nCols){
    int c = 0;
    int rowS = 0,colS=0;
    int rowE = nCols-1 ,colE = nRows-1;
    
    while(c<nRows*nCols){
        int i = colS;
        int j = rowS;
        while(j<=rowE && c<nRows*nCols){
            cout<<input[i][j]<<" ";
            c++;
            j++;
        }
        j--;

        colS++;
        i = colS;
        while(i<=colE && c<nRows*nCols ){
            cout<<input[i][j]<<" ";
            c++;
            i++;
        }
        i--;

        rowE--;
        j = rowE;
        while (j >= rowS && c<nRows*nCols) {
            cout<<input[i][j]<<" ";
            c++;
            j--;
        }
        j++;

        colE--;
        i = colE;
        while(i>=colS && c<nRows*nCols){
            cout<<input[i][j]<<" ";
            c++;
            i--;
        }
        i++;             
        rowS++;
        
    }
}
