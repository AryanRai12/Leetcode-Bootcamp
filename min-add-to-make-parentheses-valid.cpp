class Solution {
public:
    int minAddToMakeValid(string s) {
     stack<char> s1;
     int c =0;
     for(int i=0;i<s.size();i++){
         if(s[i] == '(') {
               s1.push(s[i]);
         }
         else {
             if(s1.empty() == false){
                s1.pop();
                
             }
             else c++ ;
         }
     }
    
     return c+s1.size();
        
    }
};