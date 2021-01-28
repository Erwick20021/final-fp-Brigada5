#include <stdio.h>

int main()
{

	int n, divisor, limite;
	printf ("Escribe al Divisor: \n");
	scanf ("%d" ,& divisor);
	printf ("Escribe el Limite: \n");
	scanf ("%d" ,& limite);

	if
		((limite % divisor) == 0)
		n = limite;
	else {
		n = limite-(limite % divisor);
	}

	printf ("El Valor del Máximo Múltiplo es: %d", n);
	return 0;
}
