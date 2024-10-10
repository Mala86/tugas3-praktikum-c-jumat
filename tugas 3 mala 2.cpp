#include <stdio.h>

int main() {
	
	float celcius, fahrenheit, reamur;
	
	printf("Masukkan suhu dalam celcius: ");
	scanf("%f", &celcius);
	
	fahrenheit = (celcius * 9/5 + 32);
	reamur = celcius * 4/5;
	
	printf("%.2f derajat celcius sama dengan %.2f derajat fahrenheit\n", celcius, fahrenheit);
	printf("%.2f derajat celcius sama dengan %.2f derajat reamur\n", celcius, reamur);
	
	return 0;
}
