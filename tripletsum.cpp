int tripletSum(int *input, int size, int x){
	int count = 0;
	for(int i = 0;i<size;i++){
		int temp1 = input[i];

		for(int j = i+1;j<size;j++){
			int temp2 = input[j];			
			}
			for(int k = j+1;k<size;k++){				
				if(temp1 + temp2 + input[k]==x){
					count++;					
				}
			}
		}		
	}
	return count;

}
