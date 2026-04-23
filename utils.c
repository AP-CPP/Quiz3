#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "utils.h"

 

char* get_message() {

    char *msg = malloc(20);

    strcpy(msg, "Hello from utils!");

    return msg;

}
