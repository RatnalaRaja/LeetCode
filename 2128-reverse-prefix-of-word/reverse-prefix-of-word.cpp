class Solution {
public:
    string reversePrefix(string word, char ch) {
        int found=word.find(ch);
        int i=0,j=found;
        while(i<=j){
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};