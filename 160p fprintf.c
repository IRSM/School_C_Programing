#include<stdio.h>

int main(void)
{
	FILE *fp1 = fopen("C:\\Users\\dsm2017\\Desktop\\file.txt", "w");
	fprintf(fp1, "��ƾƾƾƾ� �������������������� �ʹ� �ʹ� �����������������ǿ���");
	fclose(fp1);
	return 0; 
}
