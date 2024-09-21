#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    printf("%d의 약수는 ", n);
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
            printf("%d ", i);
        }
    }
    return answer;
}

int main() {
    int n;
    
    scanf("%d", &n);
    int answer = solution(n);
    
    printf("입니다. 이를 모두 더하면 %d입니다.", answer);
}