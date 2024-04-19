#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	if(strcmp(argv[1], "main") == 0){

		typedef struct chart
		{
		int expedition;
		int stat;
		struct chart *next;
		} chart;

		chart *list = NULL;

		int expd_value[11] = {4, 8, 15, 25, 30, 35, 40, 45, 50, 55, 100} ;
		int stat_value[11] = {20, 21, 22, 24, 25, 27, 29, 30, 32, 33, 35} ;
		
		for (int i=0; i<11; i++)
		{
		int x = expd_value[i];
		int y = stat_value[i];

		chart *n = malloc(sizeof(chart));
			if (n == NULL)
			{
			return 1;
			}
		n->expedition = x;
		n->stat = y;
		n->next = NULL;
		
			if (list == NULL)
			{
			list = n;
			}
			else
			{
				for (chart *ptr = list; ptr != NULL;ptr =  ptr->next)
				{
					if (ptr->next == NULL)
					{
					ptr->next = n;
					break;
					}
				}

			}
		}


		for (chart *pt =list; pt != NULL; pt =  pt->next)
		{
		int i = 0;
		int x = expd_value[i];
		int y = stat_value[i];
		int a;
		a = atoi(argv[2]);
		int b;
		b = atoi(argv[3]);
			if ( x > a) 
			{
				if (b >= y)
				{
				printf("good buy\n");
				}
				else
				{
				printf("bad buy\n");
				}
			}
			else
			{
			i++;
			}
	}
}
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
