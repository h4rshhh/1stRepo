
#include <bits/stdc++.h>
void replacePi(char input[]) {
	if(input[0]=='\0' || input[1]=='\0'){
		return;
	}
	if(input[0]=='p' && input[1]=='i'){
		input[0] = '3';
		input[1] = '.';
	
	    int size = strlen(input);
        for (int i = size + 1; i > 1; i--) {
          input[i] = input[i - 2];
        }
        input[2] = '1';
        input[3] = '4';
    }
	replacePi(input+1);
}


