#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(5 * sizeof(char));
    if ((num % 2 == 0) || (num == 0)) {
        strcpy(answer, "Even");
    } else {
        strcpy(answer, "Odd");
    }
    
    return answer;
}

int main() {
    int num;
    
    scanf("%d", num);
    
    char* answer = solution(num);
    printf("%s\n", answer);
    
    free(answer);
}