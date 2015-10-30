#include <stdio.h>
#include <stdlib.h>

void hello_n_times(int n, char* string) {

    for (int i = 0; i < n; i++) {
        puts(string);
    }
}

int main(int argc, char** argv) {

    // I don't really understand this
    // I suppose it's becasue the string has to have a termination
    // character, so we explicitly create 1
    char* end; 
    int n =  strtol(argv[1], &end,  10);
    char* s = argv[2];
    hello_n_times(n, s);
    return 0;
}

