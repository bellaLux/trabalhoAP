#include <stdio.h>

void cadastrar_usuario()
{
    printf("CADASTRO\n\n");

    FILE * reader = fopen("data/usuarios.bin", "rb");
    if (reader == NULL)
    {
        printf("[Nao foi possivel acessar dados de usuarios]\n");
        return 1;
    }

    usuario novo, buffer;
    int existe;
    char senha[12];

    while(1)
    {
        printf("Nome de usuario: "); scanf("%s", novo.nome);

        existe = 0;
        fseek(reader, sizeof(usuario), SEEK_SET);
        while(fread(&buffer, sizeof(usuario), 1, reader) != NULL)
        {
            if (strcmp(novo.nome, buffer.nome) == 0)
            {
                existe = 1;
                printf("[Nome de usuario indisponivel]\n");
                break;
            }
        }

        if (existe == 0) break;
    }

    fclose(reader);


    while(1)
    {
        printf("Senha: "); scanf("%s", novo.senha);
        printf("Confirme a senha: "); scanf("%s", senha);
        if (strcmp(novo.senha, senha) != 0)
        {
            printf("[senhas nao compativeis]\n");
        }
        else break;
    }

    printf("%s %s", novo.nome, novo.senha);
    FILE * writer = fopen("data/usuarios.bin", "ab");

        system("cls");
    if (fwrite(&novo, sizeof(usuario), 1, writer) == 1) printf("[usuario cadastrado]\n\n");


    fclose(writer);




}
