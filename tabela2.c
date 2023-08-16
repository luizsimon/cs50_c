#include <stdio.h>

int main() {
    printf("Tabela Verdade - Três Entradas\n");
    printf("--------------------------------\n");
    printf("| Entrada A | Entrada B | Entrada C |\n");
    printf("--------------------------------\n");

    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            for (int C = 0; C <= 1; C++) {
                printf("|     %d     |     %d     |     %d     |\n", A, B, C);
                printf("--------------------------------\n");
            }
        }
    }

    return 0;
}