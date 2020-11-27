#include "ShowHugeNumber.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printHugeInt (const HugeInt* hugeInt) {
    char* hugeIntString = HugeIntToString (hugeInt);
    printf ("%s\n", hugeIntString);
    free (hugeIntString);
}