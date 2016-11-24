#include <stdio.h>
#include <conio.h>
#include <windows.h>
main ()
{
	float r,l,pi=3.1416;
	printf("\t \t Programa para calcular la longitud de una circunferencia.");
	printf("\n Ingrese el radio ");
	scanf("%f",&r);
	l=(2*pi*r);
	printf(" \n %f Es la longitud de la circunferencia",l);
	getch();
}
