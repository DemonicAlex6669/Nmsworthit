#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

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
list *res = malloc(sizeof(list));
	if (res == NULL)
	return NULL;
res->head = NULL;
res->tail = NULL;
return res;
}

int list_append(list *l, int expd, int stat)
{
list_node *n = malloc(sizeof(list_node));
	if (n == NULL) return 1;
n->expedition = expd;
n->stat = stat;
	if (l->head == NULL)
	{
	l->head = n;
	}
	if (l->tail != NULL)
	{
	l->tail->next = n;
	}
l->tail = n;
return 0;
}

int list_sz(list *l)
{
int c = 0;
list_node *t = l->head;
	if (l->head == NULL) return 0;
	for (;;)
	{
	c += 1;
		if (t->next == NULL) return c;
	}
}

void list_destroy(list **l)
{
list_node *start = (*l)->head;
	for (; start->next != NULL; start =start->next)
	{
		if (start->next == NULL)
		{
		free(start);
		break;
		}
	list_node *last = start;
	start = start->next;
	free(last);
	}
free(*l);
l = NULL;
}

int main (int argc, char *argv[])
{
list *t = list_create();
{
assert(0 == list_sz(t));
int ok = list_append(t, 0, 0);
}

{
list_node *test = t->head;
	for (int i = 0; i < 2; i++)
	{
	assert(test->expedition == i);
	assert(test->stat == i);
	test = test->next;
	}
}
	//chosing if its a support ship or not (main=not)
	if(strcmp(argv[1], "main") == 0)
	{
		list *chart = list_create();

		int expd_value[11] = {4, 8, 15, 25, 30, 35, 40, 45, 50, 55, 100} ;
		int stat_value[11] = {20, 21, 22, 24, 25, 27, 29, 30, 32, 33, 35} ;
		
		for (int i=0; i<11; i++)
		{
		int x = expd_value[i];
		int y = stat_value[i];
		
		int ok = list_append(chart, x, y);
			if (ok != 0){return 1;}
		}

		for (list_node *pt = chart->head; pt !=NULL; pt = pt->next)	
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

		list *chart = list_create();

		int expd_value[11] = {4, 8, 15, 25 , 30, 35, 40, 45, 50, 55, 100 };
		int stat_value[11] = {2, 4, 5, 6, 8, 9, 10, 11, 12, 13, 15} ;
		
		for (int i=0; i< 11; i++)
		{
		int x = expd_value[i];
		int y = stat_value[i];
		int ok = list_append(chart, x, y);
			if (ok != 0){return 1;}
		}


		for (list_node *pt =chart->head; pt != NULL; pt =  pt->next)
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
