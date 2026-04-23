#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "utils.h"

 

int main() {

    printf("Starting program...\n");

    char *msg = get_message();

    printf("Message: %s\n", msg);

    process_data(msg);

    char *buffer = (char *)malloc(25);

    strcpy(buffer, "This string is very long");

    free(buffer);

    buffer[0] = 'X';

    char *message = "Testing *message";

    printf("Print Message: %s\n", message);

    return 0;

}
