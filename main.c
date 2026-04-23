#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "utils.h"

 

int main() {

    printf("Starting program...\n");

    char *msg = get_message();

    printf("Message: %s\n", msg);

    process_data(msg);

    free(msg);

    char *buffer = (char *)malloc(25); 

    strcpy(buffer, "This string is very long");

    buffer[0] = 'X'; // Can also be removed since its not being used

    free(buffer);

    char *message = "Testing *message";

    printf("Print Message: %s\n", message);

    return 0;

}
