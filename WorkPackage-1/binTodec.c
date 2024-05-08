#include <stdio.h>  
#include <stdlib.h>   
#include <string.h>
#include <math.h>

int main() {
    char binaryString[256];  
    int decimal = 0;
    int length = strlen(binaryString);

    
    for (int i = 0; i < length; i++) {
        decimal += (binaryString[i] - '0') * pow(2, length - i - 1);
    }

    printf("Decimal value is: %d\n", decimal);
    return 0;
}
