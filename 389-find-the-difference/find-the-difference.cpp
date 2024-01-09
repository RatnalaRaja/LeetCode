class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     int i=0;
     while(i< s.size()){
         if(s[i]==t[i]){
             i++;
         }
         else{
             ans=t[i];
             break;
         }
     }  
     if(i==s.size()){
         ans=t.back();
     }
     return ans;
    }
};