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
for (int i = 9;i>3;i--)
{
matriz [i][4]=1;
matriz [i][6]=1;
}
for (int i = 0; i<10; i++){
    printf ("\n");
    for (int a = 0; a<10; a++){
        printf ("%d",matriz[i][a]);
    }
}
}
