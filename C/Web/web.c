#include <stdio.h>
#include <sys/types.h>
#define MAX 80
#define SA struct sockaddr

void client(int conn)
{
    char buff[MAX];
    int n;
    // loop infinito para o cliente->servidor
    for (;;)
    {
        bzero(buff, MAX);

        // pegue a mensagem do cliente e copia para o buffer
        read(conn, buff, sizeof(buff));
        // print o buffer que contem as informações do client
        printf("Do cliente: %s\t Para o cliente: ", buff);
        bzero(buff, MAX);
        n = 0;
        // Copie mensagem do servidor para o buffer
        while ((buff[n++] = getchar()) != '\n')
            ;

        // e mande o buffer para o cliente
        write(conn, buff, sizeof(buff));

        if (strncmp("sair", buff, 4) == 0)
        {
            printf("Saindo... \n");
            break;
        }
    }
}

int main()
{
    int sock, conn, len;
    struct sockaddr_in servaddr, client;

    // cria sockets e verifica
    sock = socket(AF_INET, SOCK_STREAM, 0);
}