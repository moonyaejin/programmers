#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 1) {
            answer = i;
            return answer;
        }
    }
}

int main() {
    int n;
    int answer;
    
    scanf("%d", &n);
    
    printf("%d", solution(n));
    
    return 0;
}