void findLargest(int **input, int nRows, int mCols){
    int rsum = 0, csum = 0;
    int rmax = -2147483648,cmax = -2147483648;
    int rindex = 0,cindex = 0;

    for(int i = 0;i<nRows;i++){
        rsum = 0;
        for(int j = 0;j<mCols;j++){
            rsum = rsum + input[i][j];            
        }
        if(rsum>rmax){
            rmax = rsum;
            rindex = i;
        }
    }

    for(int j = 0;j<mCols;j++){
        csum = 0;
        for(int i = 0;i<nRows;i++){
            csum = csum + input[i][j];
        }
        if(csum>cmax){
            cmax = csum;
            cindex = j;
        }
    }

    if(cmax>rmax){
        cout<<"column"<<" "<<cindex<<" "<<cmax<<endl;
    }
    else{
        cout<<"row"<<" "<<rindex<<" "<<rmax<<endl;
    }



}
