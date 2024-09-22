#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    long long cpyn = n;
    int cnt = 0;
    
    //자릿수 계산
    while (cpyn > 0) {
        cpyn = cpyn / 10;
        cnt++;
    }
    
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*cnt);
    
    for(int i = 0; i < cnt; i++) {
        answer[i] = n % 10;
        n /= 10;
    }
    return answer;
}