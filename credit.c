#include <cs50.h>
#include <math.h>
#include <stdio.h>

long numero(void);
void validacao(long numero, int quantidade_digitos);
int quantidade_digitos(long numero);

int main(void)
{
    long n = numero();
    int q = quantidade_digitos(n);
    validacao(n, q);
}

// funcao pro usuario diginar o numero do cartao
long numero(void)
{
    long numero = get_long("Number: ");
    return numero;
}

// funcao para validar o numero do cartao
void validacao(long numero, int quantidade_digitos)
{
    // separar os numeros
    long n = numero;

    int i = 0;
    int soma_demais_digitos = 0;
    int soma_digitos_multiplicados = 0;
    int soma_total = 0;

    int digitos_cartao = 0;
    long x = 100;
    long y = 10; // para pegar os outros numeros que foram descartados long int y = 10;
    long e = pow(10, (quantidade_digitos - 2)); // funcao pow faz o exponente (base, expoente)
    int dois_digitos_iniciais = (n - (n % e)) / e;
    int primeiro_digito_inicial = (dois_digitos_iniciais - (dois_digitos_iniciais % 10)) / 10;
    while (i < 8) // é < 8 pq o máximo de um cartão é 16 digitos
    {
        int digitos_multiplicados = (n % x) / (x / 10);
        x = x * 100;
        digitos_cartao = digitos_cartao + digitos_multiplicados;
        int demais_digitos = (n % y) / (y / 10);
        y = y * 100;
        i++;
        int soma = 2 * digitos_multiplicados;
        soma_digitos_multiplicados = (soma % 100) / 10 + (soma % 10); // soma dos digitos apos multiplicacao por 2
        soma_demais_digitos = (demais_digitos % 10);                  // soma dos digitos que nao foram multiplicados por 2
        soma_total = soma_total + soma_demais_digitos + soma_digitos_multiplicados;
    }

    if (soma_total % 10 == 0)
    {
        if (dois_digitos_iniciais >= 51 && dois_digitos_iniciais <= 55 && quantidade_digitos == 16)
        {
            printf("\nMASTERCARD\n\n");
        }
        else if ((dois_digitos_iniciais == 34 || dois_digitos_iniciais == 37) && quantidade_digitos == 15)
        {
            printf("\nAMEX\n\n");
        }
        else if (primeiro_digito_inicial == 4 && (quantidade_digitos >= 13 && quantidade_digitos <= 16))
        {
            printf("\nVISA\n\n");
        }
        else
        {
            printf("\nINVALID\n\n");
        }
    }
    else
    {
        printf("\nINVALID\n\n");
    }
}

int quantidade_digitos(long numero)
{
    long n = numero;
    int quantidade_digitos = 0;
    long x = 10;
    long resto = 0;

    while (resto < n)
    {
        resto = (n % x);
        x = x * 10;
        quantidade_digitos++;
    }
    return quantidade_digitos;
}
