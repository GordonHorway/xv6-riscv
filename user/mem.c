#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    int *p = malloc(sizeof(int));
    printf("(pid: %d) address pointed to by p: %p\n", getpid(), p);
    *p = 0;
    for (int i = 0; i < 10; i++) {
        sleep(20);
        *p = *p + 1;
        printf("(pid: %d) content of p: %d\n", getpid(), *p);
    }
    exit(0);
}