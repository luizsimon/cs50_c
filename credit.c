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

// funcao pro usuario digitar o numero do cartao
long numero(void)
{
    long numero = get_long("\nNumber: ");
    return numero;
}

// funcao para validar o numero do cartao e definir a bandeira
void validacao(long numero, int quantidade_digitos)
{
    // separar os numeros
    long n = numero;

    int i = 0;
    int soma_demais_digitos = 0;
    int soma_digitos_multiplicados = 0;
    int soma_total = 0;
    long x = 100;
    long y = 10;
    long e = pow(10, (quantidade_digitos - 2)); // funcao pow faz a exponenciacao (base, expoente)
    int dois_digitos_iniciais = (n - (n % e)) / e; // pega os 2 primeiros digitos
    int primeiro_digito_inicial = (dois_digitos_iniciais - (dois_digitos_iniciais % 10)) / 10; // exclui o segundo digito, para validar os cartoes VISA

    while (i < 8) // é < 8 pq o máximo de um cartão é 16 digitos
    {
        int digitos_multiplicados = (n % x) / (x / 10); //pega os digitos começando do penultimo pulando de 1 em 1
        x = x * 100; // varia o x no calculo do digitos_multiplicados
        int demais_digitos = (n % y) / (y / 10); //pega os outros digitos que nao foram pegos na digitos_multiplicados
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

//funcao para contar quantos digitos o usuario escreveu
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
