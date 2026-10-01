class Solution {
public:
    int romanToInt(string s) {
        map<char, int> value = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
        int v=0;
        for(int i=0;i<s.length()-1;i++){
            if(value[s[i]]<value[s[i+1]]){
                v=v-value[s[i]];
            }else{
                v=v+value[s[i]];
            }

        }
        v=v+value[s[s.length()-1]];
        return v;
    }
};