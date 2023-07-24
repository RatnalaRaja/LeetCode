class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> a;
    for(auto i: words ){
        string te;
        stringstream s(i);
        while(getline(s,te,separator)){
            if(te!="")
            {
            a.push_back(te);
            }
        }
    }
        return a;
    }
};