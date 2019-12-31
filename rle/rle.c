#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){

	if(argc != 2){
		return;
	}

	int counter = 0;
	char current = ' ';
		
	int i;
	
	char *output = malloc(50);
	int oIndex = 0;

	for(i = 0; i < strlen(argv[1]);i++){
		
		char c = argv[1][i];
		
		if(c >= '0' && c <= '9'){
			printf("error");
		}
		
		if(c == current){
			counter ++;
		}

		else{
			if(current != ' '){
				output[oIndex] = current;
				oIndex += 1;
				output[oIndex] = counter + '0';
				oIndex += 1;
			}
			counter = 1;
			current = c;
		}		
	
	}
	output[oIndex] = current;
	oIndex += 1;
	output[oIndex] = counter + '0';
	oIndex += 1;
	
	if(strlen(output) > strlen(argv[1])){
		printf("%s\n", argv[1]);
		return;
	}
	printf("%s\n", output);

}
