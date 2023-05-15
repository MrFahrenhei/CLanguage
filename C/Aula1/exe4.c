#include <stdio.h>

int main()
{
	int qntNotas = 2;
	float num[2], sum = 0.0, avg;

	for (int i = 0; i < qntNotas; ++i)
	{
		printf("%d. Digite sua nota: ", i + 1);
		scanf("%f", &num[i]);
		sum += num[i];
	}

	avg = sum / qntNotas;
	printf("Media = %.2f", avg);
	return 0;
}
