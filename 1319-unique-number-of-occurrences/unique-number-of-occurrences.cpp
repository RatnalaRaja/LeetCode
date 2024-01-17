class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>fr;
      for(auto x: arr){
          fr[x]++;
      }  
      unordered_set<int>s;
      for(auto x: fr){
          s.insert(x.second);
      }
      return fr.size()==s.size();
    }
};


