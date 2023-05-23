#include "stdio.h"
/** Arrumar em casa bonitinho **/
int main ()
{
    char string [32];
    printf ("Digite uma palavra \n");
    scanf ("%s",string);
    int size=0;
    for (int i=0;string[i]>0;i++)
    {
        size++;
    }
    for (int i = size;i>=0;i--)
    {
        printf ("%c\n",string[i]);
    }
    return 0;
}
