#include <stdio.h>

void solveFirstTask() {
    
    int number;
    int result = 10;
    
    scanf("%d", &number);
    
    if (number > 0) {
        result = number * 2;
    } else {
        result = number - 3;
    }
    
    printf("%d\n", result);
}
