class Solution {
    boolean solution(String s) {
        // 모두 소문자로 변환
        s = s.toLowerCase();
        
        // p와 y의 개수를 저장할 변수
        int countP = 0;
        int countY = 0;
        
        // 문자열을 순회하면서 p와 y의 개수를 셈
        for (char c : s.toCharArray()) {
            if (c == 'p') countP++;
            else if (c == 'y') countY++;
        }
        
        // p와 y의 개수가 같으면 true, 다르면 false
        // boolean은 true, false 값만 가질 수 있는 논리형 데이터 타입
        boolean answer = (countP == countY);
        
        System.out.println("Hello Java");
 
        return answer;
    }
}
 
