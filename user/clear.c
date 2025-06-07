#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

/* which of these includes do I really need?
probably just user/user.h */

int main(int argc, char **argv){

    printf("\033c");

    exit(0);
}