#include "stdio.h"
int primo (int a){
    int p=0;
    for (int b=0;b<=a;b++){
        if (a==1){
            return 0;
        }
        if (a%b==0){
            p++;
        }
        } 
        if (p==2){
            return 1;
        }
        return 0;
}
int main (){
    while (1){
    int numero=0;
    printf ("Digite um numero\n");
    scanf ("%d",&numero);
    if (numero==-1){
        break;
    } 
    int aux = primo (numero);
    printf ("%d",aux);
        if (aux==1){
        printf ("numero primo\n");
    }
        if (aux==0){
        printf ("numero nao primo\n");
    }
    }
}
