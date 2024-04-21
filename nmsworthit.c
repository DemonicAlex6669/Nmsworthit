#include <stdio.h>
#include <stdlib.h>


		typedef struct chart
		{
		int expedition;
		int stat;
		struct chart *next;
		} chart;

int main (int argc, char *argv[]){
	//chosing if its a support ship or not (main=not)
	if(strcmp(argv[1], "main") == 0)
	{
		typedef struct list_node list_node;

		typedef struct list
		{
		list_node *head;
		list_node *tail;
		}list;

		struct list_node
		{
		int expedition;
		int stat;
		list_node *next;
		};

		list *list_create(void)
		{
		list *res = malloc(sizeof(list_node));
		if (res == NULL)
		return res;
		res->head = NULL;
		res->tail = NULL;
		}

		int list_append(list *l, int expd, int stat)
		{
		list_node *n = malloc(sizeof(list_node));
		if (n == NULL) return -1;
		if (l->head == NULL)
		{
		l->head =n;
		}
		if (l->head != NULL)
		{
		l->tail->next = n;
		}
		l->tail = n;
		return 0;
		}

		int expd_value[11] = {4, 8, 15, 25, 30, 35, 40, 45, 50, 55, 100} ;
		int stat_value[11] = {20, 21, 22, 24, 25, 27, 29, 30, 32, 33, 35} ;
		
		for (int i=0; i<11; i++)
		{
		int x = expd_value[i];
		int y = stat_value[i];
		int res = list_append(*l, x, y);
		if (res != 0)
		return 1;
		}

		for (list *pt = list->list_node->head->list_node; pt != NULL; pt =  pt->next)
		{
		int a;
		a = atoi(argv[2]);
		int b;
		b = atoi(argv[3]);
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
		//averaging the four stats entered
		c = atoi(argv[3]);
		d = atoi(argv[4]);
		e = atoi(argv[5]);
		f = atoi(argv[6]);
		float b;
		b = ((float)c + (float)d + (float)e + (float)f)/4;
		
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
