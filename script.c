#include <stdio.h> //Todos os scripts em C você adiciona essa biblioteca padrão, a standard IO
#include <stdlib.h> //Nesse script irei trabalhar com parametros então eu importei a standard lib

int main() //Função principal do script
{

    char msg[100] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '!', ',', '@', '*', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', '_', '-'};
    char x, y;
    int i, rot;
    system("clear");

    printf("\n[*]fuck society");
    printf("\n[*]fuedase la sociedad");
    printf("\n[*]foda-se a sociedade");

    printf("\n\nDigite um texto para ser encriptado: ");
    scanf("%s", &msg);
    printf("Quantidade de deslocações: ");
    scanf("%d", &rot);

    for(i == 0; msg [i] != '\0'; i++)
    {
        x = msg [i];
        if (x >= 'a' && x <= 'z')
        x = x + rot;

        if (x > 'z')
        {
            x = x - 'z' + 'a' -1;
        }

	   msg[i] = x;

    }

    printf("\nMensagem encriptada com sucesso. String gerada: %s\n", msg);
    return 0;

}
