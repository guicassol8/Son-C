#include <stdio.h>

int main()
{
    int matriz[10][10];
    int coluna1,coluna2;
for (int i = 0; i<10; i++){
    for (int a = 0; a<10; a++){
        matriz [i][a] = 0;
    }
}
    matriz [9][5]=2;
for (int i = 9;i>=0;i--)
{
matriz [i][4]=1;
matriz [i][6]=1;
}
for (int i = 0; i<10; i++){
    printf ("\n");
    for (int a = 0; a<10; a++){
        if (matriz [i][a]==1){
            printf ("I");
        }
        if (matriz [i][a]==2){
            printf ("o");
        }
        if (matriz [i][a]==0) printf (" ");
    }
}
while (matriz [0][5]!=2){
   for (int i = 0; i<10; i++){
    printf ("\n");
    for (int a = 0; a<10; a++){
        if (matriz [i][a]==1){
            printf ("I");
        }
        if (matriz [i][a]==2){
            printf ("o");
        }
        if (matriz [i][a]==0) printf (" ");
    }
}
int contador = 0;
scanf ("%d",&contador);
if (contador == 2){
    
}
}
}
