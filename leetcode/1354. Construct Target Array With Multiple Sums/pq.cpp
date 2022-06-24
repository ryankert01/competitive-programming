class Solution {
public:
    bool isPossible(vector<int>& target) {
        // find sum
        /**/
        long sum = 0;
        for(int i : target)
            sum += i;
        
        priority_queue<int>pq(target.begin(), target.end());
        
        while(true){
            int a = pq.top(); pq.pop();

            sum -= a;
            if(a == 1 || sum == 1) 
                return true;
            if(a <= sum || sum == 0 || a % sum == 0)
                return false;
            a %= sum;
            sum += a;
            pq.push(a);
        }
        
        return true;
    }
};
