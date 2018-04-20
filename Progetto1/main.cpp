#include <iostream>
#include <stdio.h>

//caricare una matrice di dimensioni definite dall'utente, fare la somma di righe e colonne, e stampare i valori

int nr=0;
int nc=0;
int max=20;

int sommaVettore ();
void caricaMatrice(int vett[20][20], int i, int j);
void stampaMatrice(int vett[], int nc, int nr);


int main(int argc, char** argv) 
{
	
	printf("inserisci righe");
	scanf("%d",&nr);
	printf("inserisci colonne");
	scanf("%d",&nc);
	
	int matrice [nr][nc];
	
	sommaVettore(matrice[nc][nr]);	
	
	caricaMatrice();	
	
	stampaMatrice(matrice[nr][nc]);
	return 0;
}



int sommaVettore(mat[x][y])
{
	
	for(int i; i<j; i++)
	{
		smomma
	}
}








void caricaMatrice(vett[j][i]) 
{
	int i = 0;
	int j = 0;
	for(i=0;i<=nc, i++)
	{
		for(j=0;j<=nr,j++)
		{
			scanf("%d",%n);
			mat[j][i]=n;		
		}
	}
	
	
}


void stampaMatrice(vett[nc][nr])
{
	int i = 0;
	int j = 0;
	for(i=0;i<=nc, i++)
	{
		for(j=0;j<=nr,j++)
		{
			printf("\n %d", vett[j][i]);		
		}
		prinf("\n");
	}
		
}

