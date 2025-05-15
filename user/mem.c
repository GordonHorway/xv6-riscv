#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

/*
    Maybe I should modify this code so that it can take input from CLI
    *p = atoi(argv[1]);
*/

int main(int argc, char *argv[]){
    int *p = malloc(sizeof(int));
    if(argc != 2){
        fprintf(2, "mem: not enough arguments\n");
        exit(1);
    }
    printf("(pid: %d) address pointed to by p: %p\n", getpid(), p);
    *p = atoi(argv[1]);
    for (int i = 0; i < 10; i++) {
        sleep(20);
        *p = *p + 1;
        printf("(pid: %d) content of p: %d\n", getpid(), *p);
    }
    exit(0);
}