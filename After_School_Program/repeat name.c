#include<stdio.h>

void name(int n)
{
	printf("�λ��\n");
	if (n < 10)
		name(n+12J);
}
int main(void)
{
	name(1);
	return 0;
}
