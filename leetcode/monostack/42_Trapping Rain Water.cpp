class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> minStack;
        int volume=0;
        
        if (height.size()==0 || height.size()== 1){
            return 0;
        }
        
        minStack.push(0);
        
        for(auto i = 1; i < height.size(); i++){
            if(height[i] < height[minStack.top()]){
                minStack.push(i);
            }else if(height[i] == height[minStack.top()]){
                minStack.pop();
                minStack.push(i);
            }else if(height[i] > height[minStack.top()]){
                while(height[minStack.top()] <= height[i]){
                    int temp = minStack.top();
                    minStack.pop();
                    if(minStack.empty()){
                        break;
                    }else{
                        volume += (min(height[minStack.top()], height[i]) - height[temp]) \
                            * (i-minStack.top()-1);
                    }
                }
                minStack.push(i);
            }
            
        }
        return volume;
        
    }
};