#include "proto.h"
#include "gpio.h"

void impossible_vector(unsigned pc) {
    printf("impossible exception at pc=%x\n", pc);
    reboot();
}

void interrupt_vector(unsigned pc) {
    return;
}

void main(void) {
    while(1) {}
}
