#include<stdio.h>

void scan(int *count)
{
	int a, i;
	for (i =0; i < 4; i++)
	{
		scanf("%d", &a);
		*count+=a;
	}
}
void result(int count)
{
	switch(count)
	{
		case 0 : printf("��");
			break;
		case 1 : printf("��");
			break;
		case 2 : printf("��");
			break;
		case 3 : printf("��");
			break;
		case 4 : printf("��"); 
	}
}
int main(void)
{
	int count;
	scan(&count);
	result(count);
	return 0;
}
