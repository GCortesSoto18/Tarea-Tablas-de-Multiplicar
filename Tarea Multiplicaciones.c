#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, tabla;
	
	printf("\n digite el numero de la tabla que quieras: ");
	scanf("%i" ,&tabla);
	for (i=1; i<=10; i++)
		printf ("\n %i * %i = %i " , tabla , i , tabla * i);
	
	
	return 0;
}

