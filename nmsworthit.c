#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	//chosing if its a support ship or not (main=not)
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
		int a = atoi(argv[2]);
		int b = atoi(argv[3]);
		//compareing entered expedition stat to the chart
			if ( pt->expedition > a) 
			{
				//compare entered main ship stat to chart
				if (pt->stat <= b )
				{
				//entered stat is higher or equal then chart
				printf("good buy\n");
				return 0;
				}
				else if (pt->next == NULL)
				{
				//entered stat is lower
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
		int a = atoi(argv[2]);
		//averaging the four stats entered
		int c = atoi(argv[3]);
		int d = atoi(argv[4]);
		int e = atoi(argv[5]);
		int f = atoi(argv[6]);
		float b = ((float)c + (float)d + (float)e + (float)f)/4.0;

		
			if ( pt->expedition > a) 
			{
			//compare entered expedition to chart
				if (pt->stat <= b )
				{
				//averaged stat is higher or equal
				printf("good buy\n");
				return 0;
				}
				else if (pt->next == NULL)
				{
				//entered stat is lower
				printf("bad buy\n");
				return 0;
				}
			}
		}
	}
}
