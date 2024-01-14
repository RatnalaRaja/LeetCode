class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int>v;
        for(int i=0;i<letters.size();i++){
            v.push_back(letters[i]-'a');
        }
        char ans=letters[0];
        for(int i=0;i<v.size();i++){
            if(v[i]>target-'a'){
               ans= v[i]+'a';
               break;
            }
        }
        return ans;
    }
};