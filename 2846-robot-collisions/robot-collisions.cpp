class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        vector<int>act(n);
        vector<int>see;
        iota(act.begin(),act.end(),0);

        stack<int>st;
        

        sort(act.begin(),act.end(), [&](int lhs, int rhs) { return positions[lhs] < positions[rhs]; });

        for(int &ch:act){

            if(directions[ch]=='R')st.push(ch);
            else{
                while(!st.empty() && healths[ch]>0){
                    int top=st.top();
                    st.pop();

                    if(healths[top]>healths[ch]){
                        healths[top]-=1;
                        healths[ch]=0;
                        st.push(top);
                    }
                    else if(healths[top]<healths[ch]){

                        healths[ch]-=1;
                        healths[top]=0;
                    }
                    else{
                        healths[ch]=0;
                        healths[top]=0;
                    }















                }
            }

        }
        for(int i=0;i<n;i++){
            if(healths[i]>0){
                see.push_back(healths[i]);
            }
        }
        return see;
    }
};