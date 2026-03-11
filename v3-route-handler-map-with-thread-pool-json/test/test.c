#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if(argc != 2){
        printf("Usage: %s <file>\n", argv[0]);
        return EXIT_FAILURE;
    }
    char *filename = argv[1];
    if(access(filename, F_OK) == EXIT_SUCCESS) {
        printf("FIle exists\n");
    } else {
        printf("file does not exists\n");
    }
    
    
    return EXIT_SUCCESS;
}