#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
    char *arr;
    int size = 0, i=0;
    arr = malloc(size*sizeof(char));
    if (arr == NULL) {
        printf("Kein Speicherplatz gefunden");
        return EXIT_FAILURE;
    }

    printf("Wie viele werte sollen in das array geschrieben werden\n");
    scanf("%d", &size);

    while (i < size) {
        printf("geben sie die werte der arrays an: \n");
        scanf("%s", (arr + i));
        i++;
    }

    for (int j = 0; j < size; j++) {
        printf("%c", *(arr + j));
    }


    return EXIT_SUCCESS;
}*/


int main() {
    int size = 0;
    int i = 0;
    printf("How many memory you need: \n");
    scanf("%d", &size);

    int *inArray = malloc(size * sizeof(int));

    while (i < size) {
        printf("Geben sie  die einzelnen Elemente an\n");
        scanf("%d", (inArray + i));
        i++;
    }

    int resize = 0;
    printf("Wie viel platz brauchen sie mehr: \n");
    scanf("%d", &resize);

    inArray = realloc(inArray, (resize + size) * sizeof(int));

    int finalSize = size + resize;
    while (i < (finalSize)) {
        inArray = realloc(inArray, (finalSize) * sizeof(int));
        printf("Geben sie  die einzelnen Elemente an\n");
        scanf("%d", (inArray + i));
        i++;
    }

    for (int j = 0; j < resize + size; j++) {
        printf("%d\n", *(inArray + j));
    }


    return 0;
}
