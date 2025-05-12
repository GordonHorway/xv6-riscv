#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#define NULL 0L

int main(int argc, char *argv[]) {
    int *p = malloc(sizeof(int));
    if(p == NULL){
        printf(2, "Error allocating memory\n");
        exit();
    }
    // assert(p != NULL);
    printf(1, "(%d) address pointed to by p: %p\n", getpid(), p);
    // printf("(%d) address pointed to by p: %p\n", getpid(), p);
    *p = 0; // a3
    while (1) {
        sleep(1);
        *p = *p + 1;
        printf(1, "(%d) p: %d\n", getpid(), *p);
        // printf("(%d) p: %d\n", getpid(), *p);
    }
    exit();
}