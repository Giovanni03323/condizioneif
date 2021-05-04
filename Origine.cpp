#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {
	int a, b, c;
	printf("Inserisci il primo numero ");
	scanf("%d", &a);
	printf("Inserisci il secondo numero "); 
	scanf("%d", &b);
	printf("Inserisci il terzo numero");
	scanf("%d", &c);
	/*
	printf("Inserisci due numeri, io ti calcolerò il maggiore ");
	scanf("%d", &a);
	scanf("%d", &b); 

	scanf("%d %d", &a, &b); 
	*/

	if ((a > b) && (a > c))
	{
		printf("Il maggiore è %d", a);
	}
	else {
		if ((b > a) && (b > c)) {
			printf("Il maggiore è %d", b);
		}
		else {
			printf("Il maggiore è %d", c);
		}
	}
	system("pause");
	

	/*Operatori logici 
	&& = e (and)
	|| = o (or)
	*/

	/*esempio or*
	 "Dati due numeri, visualizza la parola cane se uno dei due numeri è maggiore di 5" 
	*/

	/*
	 int main(){
		int a,b; 
		printf("Inserisci due numeri ");
		scanf("%d %d", &a, &b);
		if((a>5) || (b>5)){
			printf("cane");
		}
	system("pause");
	*/
	
}