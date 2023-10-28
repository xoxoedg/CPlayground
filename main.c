
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer {
    char vname[20];
    char nname[20];
    long PLZ;
    char ort[20];
    int geburtsjahr;
};


struct customer changeName(struct customer custom, char name[]) {
    strcpy(custom.nname, name);
    return custom;
}

void printCust(struct customer custom) {
    printf("%s\n", custom.nname);
    printf("%s\n", custom.vname);
    printf("%li\n", custom.PLZ);
    printf("%i\n", custom.geburtsjahr);
    printf("%s\n", custom.ort);
}

// Paramter pointer to struct

void changePlz(struct customer *custom, long  newPlz) {
    (*custom).PLZ = newPlz;
    //Todo Elementkennzeichnungsoperator
    //custom->PLZ = newPlz;
}


int main(void) {
    struct customer willi = {
            "Werner", "Walter", 80937, "Frankreich", 10101996
    };

    printCust(willi);

    printf("-----------------------\n");

    struct customer walter = changeName(willi, "Brumm");
    printCust(walter);

    changePlz(&walter, 1111);

    printf("-----------------------\n");

    printCust(walter);


    return 0;
}





