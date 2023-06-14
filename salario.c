#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float salario, salarioReajustado, salarioMinimo;
    salario = get_float("Entre com o salario atual: ");
    salarioMinimo = get_float("Salario Minimo: ");

    if (salario <= salarioMinimo)
    {
        salarioReajustado = 1.25 * salario;
    }
    else if (salario <= 3 * salarioMinimo)
    {
        salarioReajustado = 1.5 * salario;
    }
    else
    {
        salarioReajustado = 1.1 * salario;
    }
    printf("Salario Reajustado igual a %.2f\n", salarioReajustado);
}