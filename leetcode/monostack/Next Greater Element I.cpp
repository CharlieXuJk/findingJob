class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextMin;
        stack<int> minstack;
        vector<int> ans;
        
        minstack.push(INT_MAX);
        
        for(auto i = 0; i < nums2.size(); i++){
            if(nums2[i] < minstack.top()){
                minstack.push(nums2[i]);
            }else{
                while(minstack.top() < nums2[i]){
                    nextMin[minstack.top()] = nums2[i];
                    minstack.pop();
                }
                minstack.push(nums2[i]);
            }
        }
        
        while (!minstack.empty()){
            nextMin[minstack.top()] = -1;
            minstack.pop();
        }
        
        for(auto &i:nums1){
            ans.push_back(nextMin[i]);
        }
        return ans;
    }
};