class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> m;
        for(int i=0; i<speed.size(); i++){
            m.push_back({position[i], speed[i]});
        }
        sort(m.begin(), m.end());
        vector<double> t;
        for(int i=0; i<m.size(); i++){
            double x= (1.0 * (target-m[i].first))/ m[i].second;
            t.push_back(x);
        }
        stack<double> s;
        int cnt=0;
        for(int i=0; i<t.size(); i++){
            if(s.empty()){
                s.push(t[i]);
            }
            else{
                if(s.top()>t[i]){
                    s.push(t[i]);
                }
                else{
                    while(!s.empty() && t[i]>=s.top()){
                        s.pop();
                    }
                    s.push(t[i]);
                }
            }
        }
        return s.size();
    }
};
