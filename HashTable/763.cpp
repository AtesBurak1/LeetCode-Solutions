class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector <int> ans;
        int count {0},m{0},sum {0},k=1;
        for(int i{0}; i < s.size(); i++){
            for(int j{i+1}; j < s.size();j++){
                if(s[i] == s[j])
                    m = max(m,j);
            }
            cout << m  << " ";
            if(m==i && count > 0){
                ans.push_back(m+1 - sum);
                sum += ans[k++];
                m=0;
            }
                
            else if(m==i){
                
                ans.push_back(m+1);
                 count ++;
                sum+= ans[0];
                m=0;
            }else if(m==0){
                ans.push_back(1);
                sum+=1;
                k++;
            }
        }
            
        return ans;
    }
};