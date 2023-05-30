#include "stdio.h"
#include "string.h"

#include "file-io.h"
#include "usuario.h"

#define USUARIOS_FILEPATH "/Users/guilherme.cassol/documents/test.txt"

int totalUsuarios = 0;
struct usuario usuarios [100];

void listUsuario()
{
    for (int i=0;i < totalUsuarios; i++)
    {
        printf ("Nome: %s\n", usuarios [i].nome);
        printf ("Sobrenome: %s\n", usuarios [i].sobrenome);
        printf ("CPF: %ld\n", usuarios [i].cpf);
    }
}

void creatUsuario(char nome[],char sobrenome[], long cpf)
{
    struct usuario u1;
    FILE *fp;

    strcpy (u1.nome,nome);
    strcpy (u1.sobrenome,sobrenome);

    u1.cpf = cpf;
    usuarios[totalUsuarios] = u1;
    totalUsuarios++;
    fileWrite(USUARIOS_FILEPATH, u1);
    printf ("Usuario Registrado.\n");
}

void updateUsuario ()
{

}

void deleteUsuario()
{
    
}

int main ()
{
    char nome [20];
    char sobrenome [20];
    long cpf;
    int opcao = 0;
    while(1)
    {
        printf ("\nCentral Telefonica\n");
        printf ("1 - Registrar Usuario\n");
        printf ("2 - Listar Usuarios\n");
        printf ("3 - Atualizar Usuario\n");
        printf ("4 - Deletar Usuario\n");
        printf ("5 - Sair\n");
        
        scanf ("%d",&opcao);

    switch (opcao)
    {
    case 1:
        
        printf ("Nome: ");
        scanf ("%s",nome);
        
        printf ("\nSobrenome: ");
        scanf ("%s",sobrenome);

        printf ("\nCPF: ");
        scanf ("%ld",&cpf);

        creatUsuario(nome,sobrenome,cpf);
        break;

    case 2:
        listUsuario();
        break;

    case 3:
        break;
        
    case 4:
        break;

    case 5:
        break;
    }
    }
    return 0;
}
