#include "stdio.h"
int matriz [10][10];
int comando;
int coluna1=4;
int coluna2=4;
int valida=0;

void printmatriz ();
int contarcoluna ();

int main(){
for (int i = 0; i<10; i++)
{
    for (int a = 0; a<10; a++)
	{
        matriz [i][a] = 0;
    }
}
matriz [4][4] = 1;
printmatriz();
while (1){
scanf ("%d",&comando);
if (comando==-1){
	break;
}
valida = contarcoluna();
if (valida==1){
	printf ("Limite alcancado\n");
	break;
}
if (valida==2){
	printf ("Valor invalido\n");
}
printmatriz();
}
}





int contarcoluna (){
	if (comando==8)
	{
		if (coluna1==0){
			return 1;
		}
	matriz [coluna1][coluna2]=0;
	coluna1--;
	matriz [coluna1][coluna2]=1;
	return 0;
	}
	if (comando==2)
	{
		if (coluna1==9){
			return 1;
		}
	matriz [coluna1][coluna2]=0;
	coluna1++;
	matriz [coluna1][coluna2]=1;
	return 0;
	}
	if (comando==4)
	{
		if (coluna2==0){
			return 1;
		}
	matriz [coluna1][coluna2]=0;
	coluna2--;
	matriz [coluna1][coluna2]=1;
	return 0;
	}
	if (comando==6)
	{
		if (coluna2==9){
			return 1;
		}
	matriz [coluna1][coluna2]=0;
	coluna2++;
	matriz [coluna1][coluna2]=1;
	return 0;
	}
	return 2;
}









void printmatriz ()
{
	for (int i = 0; i<10; i++)
	{
    printf ("\n");
    for (int a = 0; a<10; a++){
        if (matriz [i][a]==1){
            printf (" o");
        }
        if (matriz [i][a]==0)
		{ 
			printf (" -");
		}
    }
	}
	printf ("\n");
}
