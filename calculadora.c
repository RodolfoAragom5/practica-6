/*Romero Sandoval Rodolfo Aragom
Ejercicio práctica 5
Hacer una calculadora
según la elección de la persona */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
	{
		int a=0, b=0, opera=0;
		int option;

		setlocale(LC_ALL,"");
  		printf("Dime la operación que quieres usar\n");
  		printf("1.- SUMA\n");
  		printf("2.- RESTA\n");
  		printf("3.- MULTIPLICACION\n");
  		printf("4.- DIVISION\n");
  		scanf("%d",&option);
  		
  		do
    		{
      			printf("Dame los numeros: \n");
      			printf("numero 1: ");
      			scanf("%d",&a);
      			printf("numero 2: ");
      			scanf("%d",&b);
    		

    		switch (option)
    			{
        			case 1:
            			opera=a+b;
            			break;
        			case 2:
            			opera=a-b;
            			break;
        			case 3:
           				opera=a*b;
            			break;
        			case 4:
            			opera=a/b;
            			break;
    			}

  			printf("El resultado de la operación es: %d\n", opera);
  			printf("¿Deseas repetir la operacion?\n");
  			printf("1.- SUMA\n");
  			printf("2.- RESTA\n");
  			printf("3.- MULTIPLICACION\n");
  			printf("4.- DIVISION\n");
  			printf("Desea salir\n");
  			printf("-1.- Salir \n");
  			scanf("%d", &opera);
  			scanf("%d", &option);

			}
    	while (option != 1,2,3,4 );
    	return 0;  
	}
