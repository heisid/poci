#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>
#ifdef HAVE_EDITLINE
#include <editline/history.h>
#endif

int main(int argc, char** argv) {
    while(1) {
        char* input = readline("poci>");
        add_history(input);
        printf("%s", input);
        free(input);
    }
    return 0;
}