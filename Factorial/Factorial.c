#include<stdio.h>
#include<conio.h>
int main()
{
	int num = 0;
	printf("Ingresa un numero entero positivo para calcular su factorial \n ");
	scanf("%d", &num);
	if (num < 0) {
		printf("No puedo calcular el factorial de numeros negativos\n");
	}
	else {
		int fac = num - 1;
		int res = num;
		while (fac >= 1)
		{
			res = res * fac;
			fac--;
		}
		printf("El factorial del numero ingresado es: %d ", res);
	}
}
