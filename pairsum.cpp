int pairSum(int *input, int size, int x){
int i = 0;
int count = 0;
	while(i<size){
	int temp = input[i];		
		for(int j = 0;j<size;j++){
			if(j == i){
				continue;
			}
			if(temp+input[j]==x){
				count++;				
			}		
		
		}
	input[i] = -9999;
	i++;		
	}
return count;
}
