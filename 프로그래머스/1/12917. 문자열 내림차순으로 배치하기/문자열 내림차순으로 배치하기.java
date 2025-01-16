import java.util.*;

class Solution {
    public String solution(String s) {
        // 문자열을 문자 배열로 변환
        char [] chars = s.toCharArray();
        
        // 문자 배열을 오름 차순으로 정렬
        Arrays.sort(chars);
        
        // 문자 배열을 뒤집어 내림차순 정렬
        StringBuilder sb = new StringBuilder(new String(chars));
        return sb.reverse().toString();
    }
}