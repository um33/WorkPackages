// You should write two programs, which convert between numbers in different format. You should make sure that
// these programs can be executed in a pipeline
#include <stdio.h>  
#include<stdlib.h>   

void decTobin(int n) {
int binArray[32];
int i=0;
    while(n>0){
        binArray[i] = n%2;
        n = n/2;
        i++;
    }  
    for(int j=i-1; j>=0; j--){
        printf("%d", binArray[j]);
    } 
}

int main() {
    int number;
    printf("Provide the decimal number that you want to convert into binary:\n");
    scanf("%d", &number);
    decTobin(number);
}


