#include <cs50.h>
#include <math.h>
#include <stdio.h>

long numero(void);
void validacao(long numero, int quantidade_digitos)
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
    long numero = get_long("Number: ");
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
    long e = pow(10, (quantidade_digitos - 2));
    int dois_digitos_iniciais = (n - (n % e)) / e;
    int primeiro_digito_inicial = (dois_digitos_iniciais - (dois_digitos_iniciais % 10)) / 10;

    while (i < 8)
    {
        int digitos_multiplicados = (n % x) / (x / 10);
        x = x * 100;
        int demais_digitos = (n % y) / (y / 10);
        y = y * 100;
        i++;
        int soma = 2 * digitos_multiplicados;
        soma_digitos_multiplicados = (soma % 100) / 10 + (soma % 10);
        soma_demais_digitos = (demais_digitos % 10);
        soma_total = soma_total + soma_demais_digitos + soma_digitos_multiplicados;
    }

    if (soma_total % 10 == 0)
    {
        if (dois_digitos_iniciais >= 51 && dois_digitos_iniciais <= 55 && quantidade_digitos == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((dois_digitos_iniciais == 34 || dois_digitos_iniciais == 37) && quantidade_digitos == 15)
        {
            printf("AMEX\n");
        }
        else if (primeiro_digito_inicial == 4 && (quantidade_digitos >= 13 && quantidade_digitos <= 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
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
