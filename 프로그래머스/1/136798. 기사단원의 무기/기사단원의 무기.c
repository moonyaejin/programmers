#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int divisors[number + 1]; 
    int sum = 0;
    
    for (int i = 1; i <= number; i++) {
        int divisor = 0;
        for (int j = 1; j <= (int)sqrt(i); j++) {
            if (i % j == 0) {
                divisor++;
                if (j * j != i) {
                    divisor++;
                }
            }
            if (divisor > limit) { 
                divisor = power;
                break;
            }
        }
        divisors[i] = divisor; 
        sum += divisors[i]; 
    }
    
    return sum; 
}