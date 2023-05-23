#include "stdio.h"
int	comprimento_string(char	str[]);
int main(){
    char string [32];
    printf ("Digite uma palavra\n");
    scanf ("%s",string);
    int size = comprimento_string (string);
    printf ("%d\n",size);
    return 0;
}
int	comprimento_string(char	str[]){
    int size=0;
    for (int i=0;str[i]>0;i++)
    {
        size++;
    }
    return size;
}
