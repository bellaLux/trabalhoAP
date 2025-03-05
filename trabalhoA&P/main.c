#include <stdio.h>
#include "usuarios/menu.h"


int main()
{
    if(criar_arquivos() != 0)
    {
        printf("[nao foi possivel criar os arquivos, programa encerrado]"); return 1;
    }


    menu();
    return 0;
}
