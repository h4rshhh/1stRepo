void helper_func(int input[],int currIndex,int output[],int &k,int size,int x){
  if (currIndex == size) {
    return;
  }

  if(input[currIndex]==x){
    output[k]=currIndex;
    k++;
  }
  helper_func(input,currIndex+1,output,k,size,x);
}
int allIndexes(int input[], int size, int x, int output[]) {
  int k=0;
  helper_func(input, 0,output, k, size, x);
  return k;

}



