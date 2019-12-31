#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	
	if(argc != 3){
		return;
	}

	int n1 = atoi( argv[1] );
	int n2 = atoi( argv[2] );
	
	int lower;
	int greater;
	
	if(n1 < n2){
		lower = n1;
		greater = n2;
	}
	else{
		lower = n2;
		greater = n1;
	}

	if(greater % lower == 0){
		printf("%d\n", lower);
		return;
	}
	
	int i;
	for(i = lower/2; i >0; i--){
		if(lower % i == 0 && greater % i == 0){
			printf("%d\n", i);
			return;
		}
	}
	printf("1\n");
}

	
	
