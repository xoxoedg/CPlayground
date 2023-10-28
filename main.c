#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int wert=10;
    int *ptr1;

    ptr1 = &wert;


    printf("ptr1 verweist auf %p\n", ptr1);
    printf("Wert in %p ist %d\n\n", ptr1, *ptr1);
    printf("Adresse von ptr1 : %p\n", &ptr1);

    return EXIT_SUCCESS;
}
