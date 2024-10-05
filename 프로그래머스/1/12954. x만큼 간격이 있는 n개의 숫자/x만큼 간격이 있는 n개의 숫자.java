class Solution {
    public long[] solution(int x, int n) {
        long[] answer = new long[n];  //크기가 n인 배열 선언
        
        answer[0] = x;  // 첫 번째 값은 x로 설정
        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] + x;  // 이전 값에 x를 더함
        }
        
        return answer;
    }
}