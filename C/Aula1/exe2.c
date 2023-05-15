#include <stdio.h>

int askInfo()
{
	int num;
	printf("Descubra se seu valor e positivo\n");
	scanf("%d", &num);
	return num;
}

void printAwnsers(int val)
{
	if(val >= 1){
		printf("%d e positivo", val);
	}else if(val < 0){
		printf("%d e negativo", val);
	}else{
		printf("%d e zero", val);
	}
}

int main()
{
	int val = askInfo();
	printAwnsers(val);
	return 0;
}
