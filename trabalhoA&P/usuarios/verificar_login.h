#include <stdio.h>

int verificar_login()
{

    char nome[24]; char senha[12];
    FILE * reader = fopen("data/usuarios.bin", "rb");
    if (reader == NULL)
    {
        printf("[Nao foi possivel acessar dados de usuarios]\n");
        fclose(reader);
        return 1;
    }
    usuario buffer;
    int validador = 0, tentativas = 0;


    while (tentativas < 3)
    {
        printf("Nome de usuario: "); scanf("%s", &nome);
        printf("Senha: "); scanf("%s", &senha);

        while(fread(&buffer, sizeof(usuario), 1, reader) != NULL)
        {
            if (strcmp(nome, buffer.nome) == 0 && strcmp(senha, buffer.senha) == 0) validador = 1;
        }

        if (validador == 1)
        {
            system("cls");
            printf("[Login bem sucedido]\n");
            fclose(reader);
            return 0;
        }
        tentativas ++;
        printf("[Usuario ou senha incorretos]\n");
    }

    fclose(reader);
    printf("[Muitas tentativas, encerrando programa...]\n");
    return 1;
}
