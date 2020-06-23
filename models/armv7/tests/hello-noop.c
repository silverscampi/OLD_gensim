#include <stdio.h>

int main(int argc, char **argv) {
    printf("Hello!\n");

    asm(
        "mrc    p4, #0, r0, cr0, cr0, #0 \n"
    );

    return 0;
}

//  arm-linux-gnueabihf-gcc -o ??? -march=armv5 -static ???/arm-hello-noop
//  arm-linux-gnueabihf-gcc -o ??? -march=armv7 -static ???/arm-hello-noop