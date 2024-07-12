class Solution {
public:

    string resm(string &s,string &matchi){
        int i=0;
        for(int j=0;j<s.length();j++){
            s[i]=s[j];
            i++;

            if(i>=2 and(s[i-2]==matchi[0] and s[i-1]==matchi[1])){
                i-=2;
            }
        }
            s.erase(s.begin()+i,s.end());
            return s;
    }
    
    int maximumGain(string s, int x, int y) {
        int n=s.length();
        int score=0;
        string maxi=(x>y)?"ab":"ba";
        string mani=(x<y)?"ab":"ba";

        string temo=resm(s,maxi);
        int len=temo.length();
        int charremo=n-len;


        score+=(charremo/2)* max(x,y);

        string temi=resm(temo,mani);
        int leni=temi.length();
        int charremi=len-leni;
            
          score+=(charremi/2)* min(x,y);



        return score;

        
    }
};