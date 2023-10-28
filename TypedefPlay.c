//
// Created by rugya on 29.10.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct human  {
    int age;
    char name[30];
};

typedef struct human HUMAN;

int main() {
    HUMAN werner = {23, "walter"};
    HUMAN fritz = {30, "Fritz"};

    printf("%d\n", werner.age);
    printf("%d\n", fritz.age);

    printf("--------------\n");

    printf("%s\n", fritz.name);
    printf("%s\n", werner.name);

    return 0;
}

