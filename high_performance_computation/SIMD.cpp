#include <bits/stdc++.h>
#include <immintrin.h>
using namespace std;

string get_cpu_name() {
    uint32_t data[4] = { 0 };
   __asm__("cpuid;"
   "mov data[0], ebx;"
   "mov data[4], edx;"
   "mov data[8], ecx;");

   return string((const char*)data);
}

void assembler() {
    std::cout<< "CPU is " << get_cpu_name() <<" \n";
}


int main () {
    assembler();
    return 0;
}
