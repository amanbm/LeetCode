class Solution {
    public boolean isAlienSorted(String[] words, String order) {
        int[] charMap = new int[26];
        for(int i = 0; i < order.length(); i++){
            charMap[order.charAt(i) - 97] = i;
        }
        
        for(int i = 0; i < words.length - 1; i++){
            String s1 = words[i];
            String s2 = words[i+1];
            for(int j = 0; j < (s1.length() < s2.length()? s2.length() : s1.length()); j++){
                if(j > s2.length() - 1){
                    return false;
                }
                if(j > s1.length() - 1){
                    break;
                }
                if(charMap[s1.charAt(j)-97] > charMap[s2.charAt(j) - 97]){
                    return false;
                } else if(charMap[s1.charAt(j)-97] < charMap[s2.charAt(j) - 97]){
                    break;
                }
            }
        }
        
        return true;
    }
   
}
