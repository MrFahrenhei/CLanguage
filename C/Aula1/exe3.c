#include <stdio.h>

int getInfo()
{
	int num;
	printf("Quantas maças tu quer?");
	scanf("%d", &num);
	return num;
}

double doTheMath(int val)
{
	double broken = 1.30;
	double calc = (val*broken);
	return calc;
}
void printAwnsers(int val)
{
	if(val < 12){
			double brok = doTheMath(val);
			printf("tudo por R$%.2f", brok);
	}else{
		printf("vai tudo por R$%d", val);
	}
}
int main()
{
	int apples = getInfo();
	printAwnsers(apples);
	return 0;
}
