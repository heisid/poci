#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>
#ifdef HAVE_EDITLINE
#include <editline/history.h>
#endif

#define INPUT_BUFFER_SIZE 2048

static char input[INPUT_BUFFER_SIZE];

int main(int argc, char** argv) {
    while(1) {
        fputs("poci> ", stdout);
        fgets(input, INPUT_BUFFER_SIZE, stdin);
        printf("%s", input);
    }
    return 0;
}