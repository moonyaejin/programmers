class Solution {
    boolean solution(String s) {
        // 모두 소문자로 변환
        s = s.toLowerCase();
        
        // p와 y의 개수를 저장할 변수
        int countP = 0;
        int countY = 0;
        
        // 문자열을 순회하면서 p와 y의 개수를 셈
        for (char c : s.toCharArray()) {
            if (c == 'p') {
                countP++;
            } else if (c == 'y') {
                countY++;
            }
        }
        
        // p와 y의 개수가 같으면 true, 다르면 false
        boolean answer = (countP == countY);
        
        // 디버깅용 출력 (원래 코드의 구조 유지)
        System.out.println("Hello Java");

        return answer;
    }
}
