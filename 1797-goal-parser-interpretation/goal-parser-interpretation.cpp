class Solution {
public:
    string interpret(string s) {
        string v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='G'){
                v.push_back('G');
            }
            else if(s[i]=='(' and s[i+1]==')'){
                v.push_back('o');
                i++;
            }
            else if(s[i]=='(' and s[i+1]=='a' and s[i+2]=='l' and s[i+3]==')'){
                v.push_back('a');
                v.push_back('l');
                i+=3;
            }
            else{
                v.push_back(s[i]);
            }

        }
        return v;
    }
};