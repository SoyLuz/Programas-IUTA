#include <stdio.h> // Declaración de Librerias
#include <conio.h>
#include <windows.h>

main () //Función Principal
{

int n1,n2,n3,sum_ma,sum_me; // Variables Nx= Para los numeros a ingresar, sum_ma = sumador_mayor, Sum_me = sumador_menor

	printf("\t \t Bienvenidos al programa"); // Titulo del programa
	printf("\nIngrese su primer valor "); 
	scanf("%d",&n1); // Captura valor 1
	printf("Ingrese segundo valor "); 
	scanf("%d",&n2); // Captura valor 2
	printf("Ingrese tercer valor ");
	scanf("%d",&n3);  // Captura valor 3
	if ((n1<n2) && (n1<n3)) // Condicional comparativa
	{
		printf("\nEl primer numero es el menor");
	}
		if ((n2<n3) && (n2<n1))
	{
		printf("\nEl segundo numero es el menor");
	}
		if ((n3<n2) && (n3<n1))
	{
		printf("\nEl tercer numero es el menor");
	}
		if ((n1>n2) && (n1>n3))
	{
		printf("\nEl primer numero es el mayor");
	}
		if ((n2>n3) && (n2>n1))
	{
		printf("\nEl segundo numero es el mayor");
	}
		if ((n3>n2) && (n3>n1))
	{
		printf("\nEl tercer numero es el mayor");
	}
	if ((n1>10)) // uso de contador para mayores de 10
	{
	sum_ma=sum_ma+1;
	}
		if ((n2>10))
	{
	sum_ma=sum_ma+1;
	}
		if ((n3>10))
	{
	sum_ma=sum_ma+1;
	}
	printf("\nLa cantidad de numeros mayores a 10 es %d",sum_ma);
		if ((n1<5)) // uso de sumador para menores de 5
	{
	sum_me=sum_me+1;
	}
	else
	{
			sum_me=sum_me-1;
	}
		if ((n2<5))
	{
	sum_me=sum_me+1;
	}
		else
	{
			sum_me=sum_me-1;
	}
		if ((n3<5))
	{
	sum_me=sum_me+1;
	}
		else
	{
			sum_me=sum_me-1;
	}
	printf("\nLa cantidad de numeros menores que 5 es %d",sum_me);
	getch();
	}
