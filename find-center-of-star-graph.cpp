class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int res=0;
        int l=edges.size();
        vector<int> hash(l+2,0);
        for(int i=0;i<l;i++){
            hash[edges[i][0]]++;
            hash[edges[i][1]]++;
        }
        for(int i=0;i<(l+2);i++){
            if(hash[i]>1){
                res=i;
                break;
            }
        }
        return res;

        
    }
};