//Juego 21 balckjack

/* 2 numeros aleatorios 
-Diclo pedir mas cartas
-Determinar el ganador
-Crear un mazo/deck 52 cartas (vector) 
-Remover cartas usadas  
-Remover cartas usadas (imprimir deck)*/

#include <stdio.h>


int main (){
	
	int cartas, suma = 0, jugar, tubaraja[8], aux, baraja[56], mesa;
	
	
do{
	printf("\nRepartiendo cartas .........");

	srand (time (NULL));
	int valor = 1 + rand()/(rand-12/(12-1+1) +1 );
	
	do{
		
	printf("\n Tus cartas son: %d  %d  " ,baraja[0], baraja[1]);
	aux = baraja[0] + baraja[1];

	printf("\n Otra carta: (no = 0) (si = el resto de numeros)");
	scanf ("%d",&cartas);
	suma = aux;
	suma = suma + baraja[0];
	mesa = baraja[2] + baraja[3];
	
	}while(suma <= 21 || cartas = 0);

	if (suma <= 21 && suma > mesa)
	printf("\n Usted ha ganado ");
	
	if(suma <21)
	printf("\n Has perdido");

	printf("\n ¿Jugar otra vez? ");
	scanf("%d",&jugar);
	
	
}while (jugar != 0);

	return 0;
}
