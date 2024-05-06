// Create a very simple encryption program. The program “shifts characters” in the ASCII-code table of a given
// input string.The user enters a text and the program prints out the encrypted text. Let the
// program read character by character, andencrypt it as above. The program is repeated
// until EOF indicated the program ends. EOF means End Of File and is a special character,
// e.g. when the user enters Ctrl +Z for Windows and Ctrl + d for Linux system.
// The number of characters to shift should be provided as a program argument, e.g.
// my_program.exe 13
// Example of a test run:
// HELLO (+enter)
// URYYB
// Banana (+enter)
// Onanan
// ( +Ctrl-z)
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void encrypted(char word[20]){
     int maxValue = 90;
    char encryptedWord[21];
    for(int i = 0; i<strlen(word); i++){
        int newNumber = (int)word[i] + 13;
        if(newNumber > maxValue){
            int difference  = newNumber - maxValue;
            encryptedWord[i] =  difference + 64;
                }else{
                    encryptedWord[i] = newNumber;
                }
    }
    encryptedWord[strlen(word)] = '\0';
    printf("Encrypted word: %s\n", encryptedWord);
}



int main(){
    char word[20];
    printf("provid the word, you want encryption for:\n ");
    scanf("%s",  word);
    for(int i = 0; i<strlen(word); i++){
          word[i] = toupper(word[i]);
    }
    printf("the string is: %s\n", word);
    encrypted(word);
}
