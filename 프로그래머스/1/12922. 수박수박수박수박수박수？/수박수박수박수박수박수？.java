class Solution {
    public String solution(int n) {
        String pattern = "수박".repeat(n / 2 + 1);
        
        return pattern.substring(0, n);
    }
}