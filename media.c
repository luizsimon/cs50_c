#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float nota1, nota2, nota3, nota4;
    string nome = get_string("Digite seu nome: \n");
    nota1 = get_float("Nota 1: \n");
    nota2 = get_float("Nota 2: \n");
    nota3 = get_float("Nota 3: \n");
    nota4 = get_float("Nota 4: \n");
    int frequencia = get_int("Qual a frequencia:");

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7 && frequencia >= 75)
    {
        printf("%s foi aprovado!\n", nome);
    }
    else
    {
        printf("%s foi reprovado!\n", nome);
    }
}