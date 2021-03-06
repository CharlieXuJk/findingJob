class Solution {
public:
    bool searchArray(vector<vector<int>> array, int target) {
        if (array.size() == 0) return false;
        int i = 0;
        int j = array[0].size()-1;
        while(i < array.size() && j >=0){
            if(array[i][j] == target){
                return true;
            }else if(array[i][j] < target){
                i++;
            }else{
                j--;
            }
        }
        return false;
        
    }
};