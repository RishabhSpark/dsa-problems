class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        ans_arr = []
        mapping = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        for i in words:
            ans_words = ''
            for j in i:
                ans_words+= mapping[ord(j)-97]
            ans_arr.append(ans_words)
        return len(set(ans_arr))