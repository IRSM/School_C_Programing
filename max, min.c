#include<stdio.h>

int main(void)
{
	int n, i, score, min = 100, max = 0;
	printf("�л� �� �Է� : ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("���� �Է� : ");
		scanf("%d", &score);
		if(min > score) min = score;
		else if(max < score) max = score; 
	}
	printf("1�� : %d, ���� : %d", max, min);
	return 0;
}
