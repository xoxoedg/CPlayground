//
// Created by rugya on 28.10.2023.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 50

struct human {
    char name[MAX];
    char surname[MAX];
    int age;
};

struct human *createHuman1(char name[], char surname[], int age) {
    struct human *human1;

    human1 = malloc(sizeof(struct human));


    strcpy(human1->name, name);
    strcpy(human1->surname, surname);
    human1->age = age;

    return human1;
}

void print(struct human *h) {
    printf("%s\n", h->surname);
    printf("%s\n", h->name);
    printf("%i\n", h->age);
}

int main() {
    
    struct human pupils[3];

    struct human *human1 = createHuman1("Walter", "Wuff", 13);
    struct human *human2 = createHuman1("Franz", "Meier", 16);
    struct human *human3 = createHuman1("Katz", "Brumm", 130);

    pupils[0] = *human1;
    pupils[1] = *human2;
    pupils[2] = *human3;

    for (int i = 0; i < 3; i++) {
        printf("----------------\n");
        print(&pupils[i]);
    }

    free(human1);
    free(human2);
    free(human3);

    return 0;
}


