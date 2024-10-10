#include <stdio.h>
#include <math.h>
int main() {
	
	float sisi_alas, tinggi, luas, keliling;
	
	printf("Masukkan panjang sisi alas segitiga (cm): ");
	scanf("%f", &sisi_alas);
	
	printf("Masukkan tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * sisi_alas * tinggi;
	keliling = 3 * sisi_alas;
	
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Keliling segitiga: %.2f cm\n", keliling);
	return 0;
}
