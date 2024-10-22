#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    int len = strlen(phone_number); // 전화번호 문자열 길이
    
    char* answer = (char*)malloc(len + 1); // 동적 할당: 전화번호 길이만큼 할당하고, 널 문자를 위한 공간 1 추가
    
    for (int i = 0; i < len -4; i++) {
        answer[i] = '*';
    }
    
    for (int i = len - 4; i < len; i++) {
        answer[i] = phone_number[i];
    }
    
    // 문자열 끝에 널 문자를 추가합니다.
    answer[len] = '\0';
    
    return answer;
}
