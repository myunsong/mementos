#include "common.h"

void blargh () {
    unsigned a = 125;
    do {
        ++a;
    } while (a < 127);
}

int main (void) {
    blargh();
    return 0;
}
