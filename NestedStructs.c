//
// Created by rugya on 28.10.2023.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct datum {
    unsigned int tag;
    unsigned int monat;
    unsigned int jahr;
};

struct uhrzeit {
    unsigned int sekunde;
    unsigned int minute;
    unsigned int stunde;
};

struct termin {
    struct datum d;
    struct uhrzeit u;
};

struct termin *changeUhrzeit(struct termin *t, struct uhrzeit *u) {
    t->u = *u;
    return t;
}



int main() {
    struct uhrzeit uhrzeitTermin = {10, 10, 10};
    struct datum  datumTermin = {1, 10, 2024};
    struct termin t = {datumTermin, uhrzeitTermin};
    char stuff[100];

    printf("%d\n", t.d.jahr);
    printf("%d\n", t.d.monat);
    printf("%d\n", t.d.tag);

    printf("------------\n");

    printf("%d\n", t.u.sekunde);
    printf("%d\n", t.u.minute);
    printf("%d\n", t.u.stunde);

    struct uhrzeit uhrzeitTerminNeu = {15, 15, 15};


    changeUhrzeit(&t, &uhrzeitTerminNeu);

    printf("------------\n");

    printf("%d\n", t.u.sekunde);
    printf("%d\n", t.u.minute);
    printf("%d\n", t.u.stunde);

    printf("------------\n");

    fgets(stuff, 100, stdin);


    for (int i = 0; i<5; i++) {
        printf("%c", stuff[i]);
    }
    
    return 0;
}