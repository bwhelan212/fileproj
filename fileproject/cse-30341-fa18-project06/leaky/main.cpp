#include <stdlib.h>
#include <iostream>

int main(int argc, const char* argv[]) {
    if (argc != 2) {std::cerr << "Usage: ./main n_ptrs_to_make\n"; exit (-1);}
    int n = atoi(argv[1]);
    for(int i = 0; i < n; ++i) {
        int *p = new int;
       delete p;
    }
    return 0;
}