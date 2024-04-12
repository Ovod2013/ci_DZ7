
#include <stdio.h>

int main() {
	int dlina = 5;
	int massiv[5];
	for (int i = 0; i < dlina; i++) {
		printf("Vvedite %d", i+1);
		printf(" element massiva: ");
		scanf("%d", &massiv[i]);
	}
	int sum = 0;
	for (int i = 0; i < dlina; i++)
		sum += massiv[i];
	printf("Srednee arifmeticheskoe elementov massiva: ");
	printf("%.3f", (float)sum / dlina);
	return 0;
}
