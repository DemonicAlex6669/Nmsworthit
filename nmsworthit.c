#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	if(strcmp(argv[1], "main") == 0)
	{

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
		int a;
		a = atoi(argv[2]);
		int b;
		b = atoi(argv[3]);
			if ( pt->expedition > a) 
			{
				if (pt->stat <= b )
				{
				printf("good buy\n");
				return 0;
				}
				else if (pt->next == NULL)
				{
				printf("bad buy\n");
				return 0;
				}
			}
		}
	}

     else if(strcmp(argv[1], "support") == 0)
	{
	 
		typedef struct chart
		{
		int expedition;
		int stat;
		struct chart *next;
		} chart;

		chart *list = NULL;

		int expd_value[11] = {4, 8, 15, 25    , 30, 35, 40, 45, 50, 55, 100 };
		int stat_value[11] = {2, 4, 5, 6, 8, 9, 10, 11, 12, 13, 15} ;
		
		for (int i=0; i< 11; i++)
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
		int a;
		a = atoi(argv[2]);
		int c;
		int d;
		int e;
		int f;
		c = atoi(argv[3]);
		d = atoi(argv[4]);
		e = atoi(argv[5]);
		f = atoi(argv[6]);
		float b;
		b = ((float)c + (float)d + (float)e + (float)f)/4;
		
			if ( pt->expedition > a) 
			{
				if (pt->stat <= b )
				{
				printf("good buy\n");
				return 0;
				}
				else if (pt->next == NULL)
				{
				printf("bad buy\n");
				return 0;
				}
			}
		}
	}
}
