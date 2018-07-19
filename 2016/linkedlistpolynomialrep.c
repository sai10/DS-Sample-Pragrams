# include <stdio.h>
# include <malloc.h>
struct polynode
{
	int coef;
	int expo;
	struct polynomial *next;
};
typedef struct polynode node;
node *start;
int main()
{
	start= (node *) malloc(sizeof(node));
	read_poly(start);
	display(start);
}
void read_poly(node *ptr)
{
	char ch;
	int num=0;
	do
	{
		printf("\n Enter coefficient of term %d:-> ", (num+1));
		scanf("%d", &ptr->coef);
		printf("\n Enter exponent of term %d:-> ", (num+1));
		scanf("%d", &ptr->expo);
		fflush(stdin);
		printf("\n Is there are more term(y/n)->: ");
		ch = getchar();
		if(ch=='y')
		{
		ptr->next =(node*)malloc(sizeof(node));
		ptr = ptr->next;
		}
		num ++;
	}while(ch=='y');
	ptr->next=NULL;
	printf("\n Total term = %d", num);
}
void display(node *ptr)
{
	int num=0;
	if(start==NULL)
	printf("Polynomial is Nil");
	while (ptr!=NULL)
	{
		printf("\n coefficient of term %d:-> ", (num+1));
		printf("%d", ptr->coef);
		printf("\n exponent of term %d:-> ", (num+1));
		printf("%d", ptr->expo);
		num++;
		ptr = ptr->next;
	}
}

