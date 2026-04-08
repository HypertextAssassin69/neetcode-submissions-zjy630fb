class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       stack<int> days;
       vector<int> days_before(temperatures.size(),0);
       for(int i=0;i< temperatures.size();i++){
       
            while(!days.empty() && (temperatures[i]>temperatures[days.top()])){
                days_before[days.top()]= (i-days.top());
                days.pop();
            }
        
        days.push(i);
       }
       return days_before; 
    }
};
