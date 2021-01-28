#include<stdio.h>
#include<conio.h>
long calcularFactorial(int n)
{
	int n = 0;
	if (n < 0) {
		printf("No puedo calcular el factorial de numeros negativos\n");
	}
	else {
		int fac = n - 1;
		int res = n;
		while (fac >= 1)
		{
			res = res * fac;
			fac--;
		}
		printf("El factorial del numero ingresado es: %d ", res);
	}
}
