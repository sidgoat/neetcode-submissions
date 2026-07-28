class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0; i<points.size(); i++){
            int d= pow(points[i][0],2) + pow(points[i][1],2);
            pq.push({d,i});
        }
        vector<vector<int>> ans;
        while(ans.size()<k){
            int x= pq.top().second;
            ans.push_back(points[x]);
            pq.pop();
        }
        return ans;

    }
};
