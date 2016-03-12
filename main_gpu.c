#include "proto.h"
#include "gpio.h"
#include "GPU.h"
#include "timer.h"

extern unsigned _gpu_mode;

void impossible_vector(unsigned pc) {
    printf("impossible exception at pc=%x\n", pc);
    reboot();
}

void interrupt_vector(unsigned pc) {
    return;
}

void main(void) {
    delay(4);
    gpu_init();
    while(1) {
    	gpu_exec();
    }
}
