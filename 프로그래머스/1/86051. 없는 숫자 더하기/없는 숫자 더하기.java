class Solution {
    // 0~9까지 숫자의 합을 totalSum 변수로 정의해두고, 배열에 있는 숫자의 합을 구해 totalSum에서 빼준다.
    public int solution(int[] numbers) {
        // 0~9 숫자 합
        int totalSum = 45;
        
        // 배열에 있는 숫자 합
        int arraySum = 0;
        // numbers 배열의 각 요소를 number 변수에 하나씩 할당하여 반복
        for (int number : numbers) {
            arraySum += number;
        }
        
        int answer = totalSum - arraySum;
        
        return answer;
    }
}