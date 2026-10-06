class Solution {
public:
    bool isSubsequence(string s, string t) {
     
        int i=s.length()-1;
        int j=t.length()-1;
        
        int count =0;
        while(i>=0&&j>=0){
        if(s[i]==t[j]){
            count++;
            i--;
            j--;
        }else{
            j--;
        }
        }
        if(count==s.length()){
            return true;
        }
        return false;
    
    }
};