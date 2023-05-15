#include <stdio.h>

int getInfo()
{
	int num;
	printf("Descubra se o seu valor e maior que 10\n");
	scanf("%d", &num);
	return num;
}
	void printAwnsers(int mat)
{
	if(mat > 10)
	{	
		printf("%d e maior que 10\n",mat);
	}else{
		printf("%d nao e maior que 10\n", mat);
	}
}
int main()
{
	int val = getInfo();
	printf("seu valor e: %d\n", val);
	printf("Ele é maior que 10?\n");
	printAwnsers(val);
	return 0;
}

