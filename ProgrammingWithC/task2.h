#include <stdio.h>

void solveSecondTask() {
    int number;
    scanf("%d", &number);
    printf("%d/n", transferToDecimal(number));
    
}

int transferToDecimal(int input) {
    
    int number = input;
    int result = 0;
    int currentPosition = 0;
    
    printf("result = ");
    
    while (number > 0) {
        
        result = result + (number % 10) * power(2, currentPosition);
        number = number / 10;
        currentPosition++;
        
    }
    
    return result;
    
}

int power(int base, int power) {
    
    int result = 1;
    int i;
    
    for (i = 1; i <= power; i++) {
        result = result * base;
    }
    
    if (power == 0) {
        return 1;
    }
    
    return result;
}
