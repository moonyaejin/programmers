import java.util.Arrays;
import java.util.Collections;

class Solution {
    public long solution(long n) {
        // 숫자를 문자열로 변환
        String str = Long.toString(n);
        
        // 문자열을 배열로 변환
        String[] array = str.split("");
        
        // 배열을 내림차순으로 정렬
        Arrays.sort(array, Collections.reverseOrder());
        
        // 배열을 문자열로 변환
        String SortedString = String.join("", array);
        
        // 문자열을 long 타입의 숫자로 변환
        Long answer = Long.parseLong(SortedString);
        
        return answer;
    }
}