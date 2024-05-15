#include <stdio.h>


float fahrToCelsius(float fahr){
	float convertedCelsius = 5.0 * (fahr-32.0) / 9.0;

	return convertedCelsius;
}


int main(){	
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;

	printf("Fahrenheit\t\tCelsius\n");
	for ( int i; i < 32; i++){
		printf("-");

	}
	printf("\n");
	while (fahr <= upper ) {
		celsius = fahrToCelsius(fahr);
		printf("\t %.0f \t %6.1f \n", fahr, celsius);
		fahr = fahr + step;
	}
}




