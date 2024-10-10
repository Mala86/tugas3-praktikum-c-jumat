#include <stdio.h>
#include <math.h>

int main() {
	
	float alas, tinggi, sisi_miring;
	
	printf("Masukkan panjang sisi alas segitiga (cm): ");
	scanf("%f", &alas);
	
	printf("Masukkan panjang tnggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	printf("Panjang sisi miring segitiga adalah: %.2f cm\n", sisi_miring);
	
	return 0;
}
