#include <stdio.h>

void opcoes()
{
    while(1)
    {
        int opt;
        printf("Opcoes de menu: \n\n");
        printf("[1] Pacientes\n");
        printf("[2] Medicos\n");
        printf("[3] Consultas\n");
        printf("[0] Encerrar\n");
        while(1)
        {
            printf("> "); scanf("%i", &opt);
            if (opt < 4 && opt > -1) break;
            printf("[Codigo invalido]");
        }

        system("cls");
        switch(opt)
        {
            case 1:
                menu_pacientes();
                break;
            case 2:
                menu_medicos();
                break;
            case 3:
                menu_consultas();
                break;
            case 0:
                printf("[Encerrando programa...]");
                return;
        }
    }
}
