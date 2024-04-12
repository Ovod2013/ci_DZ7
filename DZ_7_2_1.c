
#include <stdio.h>

int main() {
	int dlina = 5;
	int massiv[5];
	int min = 0;
	for (int i = 0; i < dlina; i++) {
		printf("Vvedite %d", i+1);
		printf(" element massiva: ");
		scanf("%d", &massiv[i]);
	}
	for (int i = 1; i < dlina; i++) {
		//printf ("%d %d %d ", i, massiv[i-1], massiv[i]);
		if (massiv[min] > massiv[i])
			min = i;
	}
	printf("Minimalnuy element massiva: ");
	printf("%d ", massiv[min]);
	return 0;
}
