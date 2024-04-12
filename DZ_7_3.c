
#include <stdio.h>

int Input(int arr[], int n) { // vvod elementov massiva
	int i;
	printf("Vvedite %d", n);
	printf(" elementov massiva cherez probel\n");
		for(i = 0; i < n; i++)
			scanf("%d",&arr[i]);
		return i;
}
void Print(int arr[], int len) { // pechat elementov massiva
	for (int i = 0; i < len; i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void Right_shift (int arr[], int len) {
	int temp;
		temp = arr[len - 1]; // zapomnili posledniy element
		for (int i = len - 1; i > 0; i--)
			arr[i] = arr[i - 1]; // peremeshaem elementy vpravo
		arr[0] = temp; // vozvrashaem posledniy element na 0 poziciiy
}
int main() {
	enum {BUFFER_SIZE = 12}; //dlina massiva
	int buffer[BUFFER_SIZE]; //sozdaem massiv
		Input(buffer,BUFFER_SIZE); //vuzov vvod massiva
		for(int i=0;i<4;i++) //sdvig 4 raza po 1 pozicii
			Right_shift(buffer,BUFFER_SIZE);
		Print(buffer,BUFFER_SIZE); //pechat sdvinutogo massiva
		return 0; // vuxod
}
