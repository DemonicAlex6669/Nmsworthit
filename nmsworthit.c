#include <stdio.h>

int main (int argc, char *argv[]){
	if(strcmp(argv[1], "main") == 0){
		int a;
		a = atoi(argv[2]);
		if(a<4){
			printf("need 20");
		}
		else if(a<8){
			printf("need 21");
		}
		else if(a<15){
			printf("need 22");
		}
		else if(a<25){
			printf("need 24");
		}
		else if(a<30){
			printf("need 25");
		}
		else if(a<35){
			printf("need 27");
		}
		else if(a<40){
			printf("need 29");
		}
		else if(a<45){
			printf("need 30");
		}
		else if(a<50){
			printf("need 32");
		}
		else if(a<55){
			printf("need 33");
		}
		else if(a>55){
			printf("need 35");
		}
		else {
			printf("provide number of expeditions");
		}
     else if(strcmp(argv[1], "support") == 0){
	int a;
		a = atoi(argv[2]);
		if(a<4){
			printf("need 2");
		}
		else if(a<8){
			printf("need 4");
		}
		else {
			printf("provide number of expeditions");
	}}
	else {
		printf("type main or support \n");
	}
	}}
