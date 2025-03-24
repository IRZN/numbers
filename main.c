#include <stdio.h>
#include <stdlib.h>

int main () {
    int pos = 0, neg = 0, z = 0, cont = 0, n;
    int porc_pos, porc_neg, porc_z;
    int sn, i = 1;
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
        printf ("\nQuer adicionar mais um numero? \n");
        printf ("1 - SIM \n2 - NAO \n");
        scanf ("%i", &sn);

        if (sn == 2) {
         i = -1;
        } else {
            i++;
        }


    }while (i > 0);

    porc_pos = ( pos * 100 ) / cont;
    porc_neg = ( neg * 100 ) / cont;
    porc_z = ( z * 100 ) / cont;

    printf ("A quantidade de numeros positivos foi: %i \n", pos);
    printf ("A quantidade de numeros negativos foi: %i \n", neg);
    printf ("A quantidade de zeros foi: %i \n", z);

    printf ("A porcentagem de numeros positivos foi: %i \n", porc_pos);
    printf ("A porcentagem de numeros negativos foi: %i \n", porc_neg);
    printf ("A porcentagem de zeros foi: %i \n", porc_z);

    return 0;
}
