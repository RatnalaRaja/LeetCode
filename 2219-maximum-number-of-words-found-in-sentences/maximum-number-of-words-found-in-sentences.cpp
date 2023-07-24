class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int c=1;
        vector<int>v;
        for(int i=0;i<sen.size();i++){
            c=1;
            for(int j=0;j<sen[i].length();j++){
                if(sen[i][j]==' '){
                    c++;
                }
            }
        v.push_back(c);
        }
        int k=*max_element(v.begin(),v.end());
        return k;
    }
};