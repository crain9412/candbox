#include <stdio.h>
#include <database.h>
#include <stdlib.h>


void init(void) {
    int n;
    FILE *fptr;
    char dbName[] = "CRAINDB\0";

    if ((fptr = fopen("/tmp/db.bin", "wb")) == NULL){
       printf("Error! opening file");

       exit(1);
    }

    fwrite(&dbName, sizeof(dbName), 1, fptr);
    fclose(fptr);
    return;
}
