#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){

    if(argc > 1){
        write(2, "usage: command\n", 16);
        exit(1);
    }

    write(1, "xv6\n", 5);

    exit(0);
}