#include <stdio.h>
#include <string.h>

#include "../data/estrutura_dados.h"
#include "verificar_login.h"
#include "cadastrar_usuario.h"
#include "../medicos/menu_medicos.h"
#include "../consultas/menu_consultas.h"
#include "../pacientes/menu_pacientes.h"
#include "../opcoes.h"



void menu()
{
    char opt;
    while(1)
    {
        printf("Ola usuario, escolha uma das opcoes: \n\n");
        printf("[1] Efetuar login \n");
        printf("[2] Efetuar cadastro \n");
        printf("[0] Encerrar \n");
        printf("> ");

        scanf("\n%c", &opt);
        system("cls");

        switch(opt)
        {
            case '1':
                if (verificar_login() == 0) opcoes();
                return;
            case '2':
                cadastrar_usuario();
                break;
            case '0':
                printf("[encerrando programa...]");
                return;
        }
    }
}



