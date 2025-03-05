#ifndef estrutura_dados.h
#define estrutura_dados.h


#include <stdio.h>

typedef struct
{
    char nome[24];
    char senha[12];
} usuario;

typedef struct
{
    char CRM[6];
    char nome[50];
    char especialidade[20];
    char data_de_nascimento[11];
    float valor_hora_trabalho;
    char telefone[14];
} medico;

typedef struct
{
    char CPF[12];
    char nome[50];
    char especialidade[20];
    char data_de_nascimento[11];
    char telefone[14];
} paciente;

typedef struct
{
    char cpf_paciente[12];
    char crm_medico[6];
    char sintomas[100];
    char data[11];
    char encaminhamentos[100];
} consulta;

// builder //
int criar_arquivos()
{
    if (fopen("data/usuarios.bin", "rb") == NULL)
    {
        fopen("data/usuarios.bin", "wb");
    }

    if (fopen("data/medicos.bin", "rb") == NULL)
    {
        fopen("data/medicos.bin", "wb");
    }

    if (fopen("data/pacientes.bin", "rb") == NULL)
    {
        fopen("data/pacientes.bin", "wb");
    }

    if (fopen("data/consultas.bin", "rb") == NULL)
    {
        fopen("data/consultas.bin", "wb");
    }

    return 0;
}

#endif
