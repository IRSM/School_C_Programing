#include<stdio.h>

int main(void)
{
	int h, m;
	printf("�ð��� ���� �Է��ϼ��� : ");
	scanf("%d %d", &h, &m);
	
	if (h >= 0 && m >= 30) printf("%d�� %d��", h, m-30);
	else if(h > 0 && m < 30) printf("%d�� %d��", h-1, m+30);
	else printf("%d�� %d��", 23, m+30);
	return 0;
}
