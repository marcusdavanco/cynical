#include <stdio.h>

main()
{
	int x;
	printf("Introduza um Nº ");
	scanf("%d", &x);
	if (x)
		printf("%d não é zero!!!\n", x);
	else
		printf("%d é igual a zero!!!\n", x);
}
