class Solution {
public:
    void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}
    bool isAnagram(string s, string t) {
        sortString(s);
        sortString(t);
        if(s==t)
            return true;
        return false;
    }
};