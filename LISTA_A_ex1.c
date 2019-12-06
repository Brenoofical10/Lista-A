#include <stdio.h>
#include <stdlib.h>

int main (void)
{	
	char name[100];
	
	printf("Digite seu nome: \n");
	scanf("%s", &name);
	printf("\n%s", name);

	system ("pause");
	return 0;
}
