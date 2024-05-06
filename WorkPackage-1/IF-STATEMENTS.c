// Write a program that reads in an integer number between 1 and 5 from the keyboard and prints out one of
// existing five sentences on the console depending on what number was entered. You can invent the sentences
// as you want, but each sentence should be unique.
// Echoes of dawn
// Whispers of frost
// Shadow's embrace
// Lanterns in the mist
// Silent symphony
// The program continues to ask for a new number and exits if number isn ́t in the interval 1 to 5
#include <stdio.h>    

 #include <stdio.h>

void printInput(int *n) {
    printf("Provide a number between 1 and 5: \n");
    scanf("%d", n);
}

int main() {
    int number;

    do {
        printInput(&number);  // Read the initial or subsequent input within the loop

        switch (number) {
            case 1:
                printf("Echos of dawn.\n");
                break;
            case 2:
                printf("Whispers of frost.\n");
                break;
            case 3:
                printf("Lanterns in the mist.\n");
                break;
            case 4:
                printf("Shadow's embrace.\n");
                break;
            case 5:
                printf("Silent symphony.\n");
                break;
            default:
                printf("Invalid input. Please try again.\n");
                break;
        }
    } while (number < 1 || number > 5); 

    return 0;
}
