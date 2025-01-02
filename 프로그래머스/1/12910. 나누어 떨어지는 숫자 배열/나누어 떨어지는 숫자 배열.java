import java.util.*;

class Solution {
        public int[] solution(int[] arr, int divisor) {
        List<Integer> divisibleNumbers = new ArrayList<>();
        
        for (int num : arr) {
            if (num % divisor == 0) {
                divisibleNumbers.add(num);
            }
        }
        
        if (divisibleNumbers.isEmpty()) {
            return new int[] { -1 };
        }
        
        // 오름차순 정렬
        Collections.sort(divisibleNumbers);
        
        // 리스트의 자료형이 List<Integer>이기 때문에 반환값 int[]로 변환
        // mapToInt(i -> i) 로 스트림의 각 요소 Integer를 기본 자료형 int로 변환
        // toArray()를 사용해 int[] 배열로 반환
        return divisibleNumbers.stream().mapToInt(i -> i).toArray();
    }
}