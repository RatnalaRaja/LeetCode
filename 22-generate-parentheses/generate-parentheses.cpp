class Solution {
public:
    void para(int n,vector<string>&res,int open,int closed,string current){
        if(closed==n){
            res.push_back(current);
            return;
        }

        if(open<n){
            para(n,res,open+1,closed,current+'(');
        }
        if(open>closed){
            para(n,res,open,closed+1,current+')');
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>res;
        para(n,res,0,0,"");
        return res;
    }
};