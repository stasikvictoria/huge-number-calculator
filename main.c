#include <stdlib.h>
#include <stdio.h>
#include "IHMHugeNumber/ScanHugeNumber.h"
#include "IHMHugeNumber/ShowHugeNumber.h"

int main (void) {
    HugeFloat* op1 = createHugeFloatFromString ("1002315684321510", "-10");
    HugeFloat* op2 = createHugeFloatFromString ("98745", "236");
    HugeFloat* addition = addHugeFloat (op1, op2);
    HugeFloat* substraction = substractHugeFloat (op1, op2);
    HugeFloat* multiplication = multiplyHugeFloat (op1, op2);
    HugeInt* division = divideHugeInt (op1->significand, op2->significand);

    printHugeFloat (op1);
    printHugeFloat (op2);
    printf (" + = ");
    printHugeFloat (addition);
    printf (" - = ");
    printHugeFloat (substraction);
    printf (" x = ");
    printHugeFloat (multiplication);
    printf (" / = ");
    printHugeInt (division);
    
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString("123456789012345678901234567890"); 
    printHugeUnsignedInt (hugeNumber); 
    hugeNumber = createHugeUnsignedIntFromString("0000000123456789012345678901234567890"); 
    printHugeUnsignedInt (hugeNumber);

    deleteHugeFloat (op1);
    deleteHugeFloat (op2);
    deleteHugeFloat (addition);
    deleteHugeFloat (substraction);
    deleteHugeFloat (multiplication);
    deleteHugeInt (division);

    return EXIT_SUCCESS;
}
