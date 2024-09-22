#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    while(n > 0) {
        answer += n % 10;  // 마지막 자릿수(나머지)를 더함
        n /= 10;  // 나머지를 버린 몫을 n에 다시 할당
    }
    return answer;  
}

int main() {
    int n;
    int answer;
    
    scanf("%d", &n);
    
    answer = solution(n);
    
    printf("%d", answer);
    
    return 0;
}