import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        // 금액 배열 오름차순 정렬
        
        Arrays.sort(d);
        
        int count = 0; // 지원 가능 부서 수
        int sum = 0; // 현재까지 사용한 예산
        
        // 예산 내에서 최대한 많은 부서를 지원
        for (int cost : d) {
            sum += cost;
            if (sum > budget) {
                break;
            }
            count++;
        }
        return count;
    }
}