import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        // 중복을 제거해 합을 저장할 HashSet
        Set<Integer> resultSet = new HashSet<>();
        
        // 모든 조합의 합 계산
        for (int i = 0; i < numbers.length; i++) {
            for (int j = i+1; j < numbers.length; j++) {
                resultSet.add(numbers[i] + numbers[j]);
            }
        }
        
        // HashSet -> ArrayList 변환
        List<Integer> resultList = new ArrayList<> (resultSet);
        Collections.sort(resultList); // 오름차순 정렬
        
        // ArrayList -> array 변환
        int[] result = new int[resultList.size()];
        for (int i = 0; i < resultList.size(); i++) {
            result[i] = resultList.get(i);
        }
        return result;
    }
}