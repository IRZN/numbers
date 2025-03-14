#include <stdio.h>
#include <stdlib.h>

int main () {
    int pos = 0, neg = 0, z = 0, cont = 0, n;

    do {
        printf ("Digite um numero qualquer: \n");
        scanf ("%i", &n);

        if (n > 0) {
            pos++;
        }
        if (n < 0) {
            neg++;
        }
        if (n == 0) {
            z++;
        }

        cont++;

    }while (cont < 20);

    printf ("A quantidade de numeros positivos foi: %i \n", pos);
    printf ("A quantidade de numeros negativos foi: %i \n", neg);
    printf ("A quantidade de zeros foi: %i \n", z);

    return 0;
}
