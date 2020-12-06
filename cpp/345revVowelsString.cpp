class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end){
            if(isVowel(s[start]) && isVowel(s[end])){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }else if(isVowel(s[start])){
                end--;
            }else if(isVowel(s[end])){
                start++;
            } else {
                start++;
                end--;  
            }
        }
        return s;
    }
    
    bool isVowel(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
               || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};
