#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 오름차순 정렬용
int compare_asc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// 내림차순 정렬용
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    
    qsort(A, A_len, sizeof(int), compare_asc);
    qsort(B, B_len, sizeof(int), compare_desc);
    
    for (size_t i = 0; i < A_len; i++) {
        answer += A[i] * B[i];
    }
    
    return answer;
}