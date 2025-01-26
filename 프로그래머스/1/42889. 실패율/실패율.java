import java.util.*;
import java.util.stream.*;

class Solution {
    public int[] solution(int N, int[] stages) {
        // 실패율 리스트 선언
        List<Map.Entry<Integer, Double>> failureRates = new ArrayList<>();
        
        // 각 스테이지별 실패율 계산
        for (int i = 1; i <= N; i++) {
            int stage = i; // i 값을 복사하여 lambda에서 사용
            
            // 스테이지 i에 도달한 사용자 수 계산
            int reached = (int) Arrays.stream(stages).filter(s -> s >= stage).count();
            // 스테이지 i에서 클리어하지 못한 사용자 수 계산
            int notCleared = (int) Arrays.stream(stages).filter(s -> s == stage).count();
            
            // 실패율 계산
            double failureRate = (reached == 0) ? 0 : (double) notCleared / reached;
            
            // 실패율과 스테이지 번호를 리스트에 추가
            failureRates.add(new AbstractMap.SimpleEntry<>(stage, failureRate));
        }
        
        // 실패율 내림차순 정렬 (실패율 같으면 스테이지 번호 오름차순)
        failureRates.sort((o1, o2) -> {
            int compareByFailureRate = o2.getValue().compareTo(o1.getValue());
            if (compareByFailureRate != 0) {
                return compareByFailureRate;
            }
            return o1.getKey().compareTo(o2.getKey());
        });

        // 정렬된 리스트에서 스테이지 번호만 추출하여 배열로 변환
        return failureRates.stream()
                           .mapToInt(Map.Entry::getKey)
                           .toArray();
    }
}
