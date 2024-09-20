#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    int total_length = 0;
    
    // 음식의 왼쪽 배치 갯수 계산
    for (size_t i = 1; i < food_len; i++) {
        total_length += (food[i] / 2); // 음식을 절반으로 나눔
    }
    
    // 총 문자열 길이 = 왼쪽 음식 + 물 + 오른쪽 음식
    total_length = total_length * 2 + 1;
    
    // 결과 문자열 동적 할당 (total_length + 1은 null-terminator 포함)
    char* answer = (char*)malloc(total_length + 1);
    
    // 메모리 할당 실패 체크
    if (answer == NULL) {
        return NULL;  // 메모리 할당 실패 시
    }

    // 빈 문자열로 초기화
    answer[0] = '\0';

    // 왼쪽 음식의 최대 길이에 맞춰 동적 할당
    char* left = (char*)malloc(total_length + 1);
    
    // 메모리 할당 실패 체크
    if (left == NULL) {
        free(answer);  // 할당된 메모리 해제
        return NULL;  // 메모리 할당 실패 시
    }

    left[0] = '\0';  // 빈 문자열로 초기화

    // 임시 배열에 왼쪽 음식 배치
    for (size_t i = 1; i < food_len; i++) {
        int count = food[i] / 2;
        for (int j = 0; j < count; j++) {
            char foodNum[2];  // 숫자를 문자로 변환
            sprintf(foodNum, "%d", (int)i);
            strcat(left, foodNum);  // 왼쪽 음식 추가
        }
    }
    
    // 왼쪽 음식을 결과에 추가
    strcat(answer, left);
    
    // 가운데에 물 추가
    strcat(answer, "0");
    
    // 오른쪽은 왼쪽의 역순으로 추가
    for (int i = strlen(left) - 1; i >= 0; i--) {
        char foodNum[2] = {left[i], '\0'};  // 문자 하나씩 복사
        strcat(answer, foodNum);  // 오른쪽에 추가
    }

    answer[total_length] = '\0';  // null-terminator 추가
    
    // 동적으로 할당한 메모리 해제
    free(left);
    
    return answer;
}

int main() {
    int food1[] = {1, 3, 4, 6};
    char* result1 = solution(food1, sizeof(food1) / sizeof(food1[0]));
    printf("%s\n", result1); // 출력: 1223330333221
    free(result1); // 동적 할당 해제

    int food2[] = {1, 7, 1, 2};
    char* result2 = solution(food2, sizeof(food2) / sizeof(food2[0]));
    printf("%s\n", result2); // 출력: 111303111
    free(result2); // 동적 할당 해제

    return 0;
}
