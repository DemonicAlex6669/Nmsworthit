#include <stdio.h>

int main (int argc, char *argv[]){
	if(strcmp(argv[1], "main") == 0){
		int a;
		a = atoi(argv[2]);
		if(a<4){
			printf("need 20\n");
		}
		else if(a<8){
			printf("need 2\n1");
		}
		else if(a<15){
			printf("need 22\n");
		}
		else if(a<25){
			printf("need 24\n");
		}
		else if(a<30){
			printf("need 25\n");
		}
		else if(a<35){
			printf("need 27\n");
		}
		else if(a<40){
			printf("need 29\n");
		}
		else if(a<45){
			printf("need 30\n");
		}
		else if(a<50){
			printf("need 32\n");
		}
		else if(a<55){
			printf("need 33\n");
		}
		else if(a>55){
			printf("need 35\n");
		}
		else {
			printf("provide number of expeditions\n");
		}}
     else if(strcmp(argv[1], "support") == 0){
	int a;
		a = atoi(argv[2]);
		if(a<4){
			printf("need 2\n");
		}
		else if(a<8){
			printf("need 4\n");
		}
		else {
			printf("provide number of expeditions\n");
	}}
	else {
		printf("type main or support \n");
	}
	}
