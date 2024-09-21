#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    
    size_t length = strlen(s);
    
    char* p = (char*)malloc(length + 1);
    if(p == NULL) {
        perror("메모리 할당 실패");
        return 0;
    }
    
    strcpy(p, s);
    
    answer = atoi(p);
    
    free(p);
    
    return answer;
}