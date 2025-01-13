import java.util.*;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        
        // 포켓몬 개수
        int choosePoketmon = nums.length / 2;
        
        // 중복 제거
        Set<Integer> setPoketmon = new HashSet<>();
        for (int num : nums) {
            setPoketmon.add(num);
        }
        
        // 배열의 포켓몬 개수와 중복을 제거한 포켓몬 개수 비교
        answer = Math.min(setPoketmon.size(), choosePoketmon);
        return answer;
    }
}