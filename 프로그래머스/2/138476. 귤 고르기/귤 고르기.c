#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 내림차순
int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

// tangerine_len은 배열 tangerine의 길이입니다.
int solution(int k, int tangerine[], size_t tangerine_len) {
    int answer = 0;
    
    int size_count[10000001] = {0};
    
    // 귤 크기 별 개수 세기
    for(size_t i = 0; i < tangerine_len; i++) {
        size_count[tangerine[i]]++;
    }
    
    // 빈도수 저장 배열
    int freq[tangerine_len];
    int freq_index = 0;
    
    // 크기 별 개수 freq 배열에 추가
    for (int i = 0; i < 10000001; i++) {
        if (size_count[i] > 0) {
            freq[freq_index++] = size_count[i];
        }
    }
    
    // freq 배열을 내림차순 정렬
    qsort(freq, freq_index, sizeof(int), compare_desc);

    // 귤을 종류별로 선택하며 k개에 도달할 때까지 반복
    int total = 0;
    for (int i = 0; i < freq_index; i++) {
        total += freq[i];
        answer++;
        if (total >= k) {
            break;
        }
    }
    
    return answer;
}