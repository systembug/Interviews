#include <iostream>

int parity(unsigned long long x) {
    x ^= x >> 32;
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 0x1;
}



int main() {
    std::cout << parity(0x00001001) << std::endl;
    return 0;
}
