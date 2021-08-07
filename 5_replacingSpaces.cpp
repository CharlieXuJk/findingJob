class Solution {
public:
    string replaceSpaces(string &str) {
        int cnt = 0;
        int length = str.size();
        for(auto i:str){
            if(i == ' '){
                cnt++;
            }
        }
        int increaseLength = cnt * 2;
        string add(increaseLength, ' ');
        str = str + add;
        int first = length-1;
        int last = str.size()-1;
        for(;first>=0; first--){
            if(str[first] != ' '){ 
                str[last--] = str[first];
            }else if(str[first] == ' '){
                str[last--] = '0';
                str[last--] = '2';
                str[last--] = '%';
            }
        }
        return str;
    }

};