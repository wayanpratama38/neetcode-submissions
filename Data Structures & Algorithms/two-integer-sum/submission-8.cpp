class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index;
        vector<pair<int,int>> data; // {nums[index], index}
        vector<int> result; // [idx1,idx2]
        for (int i = 0 ; i < nums.size() ; i ++ ){
            data.push_back({nums[i],i});
            cout<<nums[i]<<" "<<i<<endl;
        }
        // ascending
        sort(data.begin(),data.end());
        
        // Brute force
        for (int i = 0 ; i < nums.size()-1 ; i++ ){
            for (int j = i+1 ; j < nums.size() ; j++ ){
                if(data[i].first + data[j].first == target){
                    result.push_back(data[i].second);
                    result.push_back(data[j].second);
                    break;
                }
            }
        }

        sort(result.begin(),result.end());
        return result;
    }
};
