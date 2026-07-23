
class StockSpanner {
     stack<pair<int,int>> s;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.empty()){
            s.push({price,1});
            return 1;
        }
        else{
        int cnt=0;
        if(price< s.top().first){
            s.push({price,1});
            return 1;
        }
        else{
            while(!s.empty() && price>=s.top().first){
                pair<int,int> t= s.top();
                s.pop();
                cnt=cnt+t.second;
                
            }
            s.push({price,cnt+1});
            return cnt+1;
        }
        }
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */