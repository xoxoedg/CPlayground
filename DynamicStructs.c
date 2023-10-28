//
// Created by rugya on 28.10.2023.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 30

struct human {
    char hairColor[MAX];
    char name[MAX];
    int geburtsjahr;
};

struct human *createHuman(char name[], char hairColor[], int geburtsjahr) {
    struct human *willi;
    willi = malloc(sizeof(struct human));

    (*willi).geburtsjahr = geburtsjahr;
    strcpy(willi->name, name);
    strcpy((*willi).hairColor, hairColor);

    return willi;
}

void printHuman(struct human *h) {
    printf("%s\n", h->hairColor);
    printf("%s\n", h->name);
    printf("%d\n", h->geburtsjahr);
}


int main() {
    struct human *willi = createHuman("Werner", "Red", 1886);
    printHuman(willi);

    return 0;
}