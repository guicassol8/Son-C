#include "stdio.h"
#include "file-io.h"
#include "usuario.h"

int fileExist(char filepath[])
{
    FILE *file;
    fopen(filepath, "r");
    if (file)
    {
        fclose(file);
        return 1;
    }
    return 0;
}

void fileWrite (char filepath[], struct usuario u)
{
    FILE *fp;

    if (!fileExists(filepath))
    {
        fp = fopen (filepath, "w+");
        fprintf (fp,"nome,sobrenome,cpf\n");
        
    }
    
    fp = fopen (filepath,"a");
    fprintf (fp,"%s,%s,%ld",u.nome,u.sobrenome,u.cpf);
    fclose(fp);
}
