class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> m;
        for(int i=0; i<tasks.size(); i++){
            m[tasks[i]]++;
        }
        int ma=0;
        int cnt=0;
        for(auto x: m){
            if(x.second>ma){
                ma=x.second;
                cnt=0;
            }
            else if(x.second==ma){
                cnt++;
            }
        }
        if(cnt<=n+1 && ((ma-1)*n+ ma + cnt)>tasks.size()){
        int ans= (ma-1)*n + ma+ cnt;
        return ans;
        }
        else{
            return tasks.size();
        }
    }
};
