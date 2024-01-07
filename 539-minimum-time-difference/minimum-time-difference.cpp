class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>mintime;
        for(int i=0;i<timePoints.size();i++){ 
            string curr=timePoints[i];
        int hours=stoi(curr.substr(0,2));
        int minutes=stoi(curr.substr(3,2));
        int totalmin=(hours*60)+minutes;
        mintime.push_back(totalmin);
        }

        sort(mintime.begin(),mintime.end());
        int mini=INT_MAX;
        int n=mintime.size();
        for(int i=0;i<n-1;i++){
            int diff=mintime[i+1]-mintime[i];
            mini=min(mini,diff);
        }
        int lastdif=(mintime[0]+1440)-mintime[n-1];
        mini=min(mini,lastdif);
        return mini;
        
    }
};