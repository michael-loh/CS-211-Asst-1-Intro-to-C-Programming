#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	if(argc != 2){
		return;
	}
	int e;
	int i;
	for(i = 0; i < strlen(argv[1]); i++){
		
		e = argv[1][i];
		if((e >= 'n'&& e <='z') || (e >= 'N' && e <= 'Z')){
			e = e-13;
		}
		else if(argv[1][i] == ' '){
			printf(" ");
			continue;
		}
		else{
			e = e + 13;
		}
		
		printf("%c", e);
	}
	
	printf("\n");
} 
