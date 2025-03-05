#include <stdio.h>


void menu_pacientes()
{
    int opt;
    printf("Opcoes para pacientes: \n\n");
    printf("[0] Retornar\n");
    while(1)
    {
        printf("> "); scanf("%i", &opt);
        if (opt == 0) break;
        printf("[Codigo invalido]");
    }

    switch(opt)
    {

        case 0:
            return;
    }
}
