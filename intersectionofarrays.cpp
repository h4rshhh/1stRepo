void intersection(int *input1, int *input2, int size1, int size2)
{
    int i = 0;
    while(i<size1){
        int temp = input1[i];
        
        for(int j = 0;j<size2;j++){
            if(temp==input2[j]){
               cout<<input2[j]<<" ";
               input2[j] = -1;
               break;
            }
        }
        i++;
    }    
}
