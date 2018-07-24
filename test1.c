#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int factorialize (int argc, char *argv[]){
    if (argc != 2){
        printf("error");
    }

    int n = atoi(argv[1]);
    int factor = 1;


    for (int i=1; i <= n; i++){
        factor = factor * i;
    }

    long long  fix = (long long) factor;


  printf ("factorial: %lli\n", fix);

}