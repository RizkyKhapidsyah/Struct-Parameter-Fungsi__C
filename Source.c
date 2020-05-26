#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct {
	int bil1;
	int bil2;
} data_bilangan;

void tampil_bilangan(data_bilangan bilangan) {
	printf("Bilangan Pertama   = %i\n", bilangan.bil1);
	printf("Bilangan Kedua     = %i\n", bilangan.bil2);
}

int main() {
	puts("===============================");
	puts("Struct Sebagai Parameter Fungsi");
	puts("===============================");
	data_bilangan bilangan;
	printf("Masukkan Bilangan Pertama  : "); scanf_s("%i", &bilangan.bil1);
	printf("Masukkan Bilangan Kedua    : "); scanf_s("%i", &bilangan.bil2);
	printf("\n");
	tampil_bilangan(bilangan);
	printf("\n");
	_getch();
	return 0;
}