class Solution {
public:
    string decodeString(string str) {
         int m = str.size();
        string ans = "";string temp = "";int mul = 0;
        stack<int> num;stack<string> st;
        for(int i=0;i<m;++i){
            if(str[i]>='0'&&str[i]<='9'){mul=mul*10+(str[i]-'0');}
            else if(str[i]=='['){st.push(ans);num.push(mul);mul=0;ans="";}
            else if(str[i]==']'){
                temp=ans;
                for(int j=1;j<num.top();++j){ans=ans+temp;}
                num.pop();ans=st.top()+ans;st.pop();
            }
            else{ans.push_back(str[i]);}
        }
        return ans;
    }
};