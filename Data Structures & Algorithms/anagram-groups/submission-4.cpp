class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> data;
        vector<vector<string>> result;
        if(strs.size()<=1){
            vector<string> temp = {strs[0]};
            result.push_back(temp);
            return result;
        }
        // create pair (?) {string text,sort of string}
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            cout<<"BEFORE"<<temp<<endl;
            sort(temp.begin(),temp.end());
            cout<<"AFTER"<<temp<<endl;
            data.push_back({temp,strs[i]});
            //  strs = [{"act","act"},{"act","cat"},{"ath","hat"},{"opst","pots"},{"opst","tops"},{"opst","stop"}]
        }
        sort(data.begin(),data.end());
        int idx=0;
        while(idx<data.size()){
            int idxtemp = idx+1;
            vector<string> vecTemp;
            vecTemp.push_back(data[idx].second);
            
            
            while(idxtemp < data.size() && data[idx].first == data[idxtemp].first){
                vecTemp.push_back(data[idxtemp].second);
                idxtemp++;
            }
            
            result.push_back(vecTemp);
            
            idx = idxtemp;
        }

        return result;
    }
};
