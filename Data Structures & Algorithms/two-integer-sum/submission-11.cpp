class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index;
        vector<pair<int,int>> data; // {nums[index], index}
        vector<int> result; // [idx1,idx2]
        for (int i = 0 ; i < nums.size() ; i ++ ){
            data.push_back({nums[i],i});
        }
        // ascending
        sort(data.begin(),data.end());
        
        int first=0;int second=nums.size()-1;
        while(first<second){
            int curr = data[first].first + data[second].first;
            if(curr==target){
                result.push_back(data[first].second);
                result.push_back(data[second].second);
                break;
            } else if (curr<target){
                first++;
            } else {
                second--;
            }
        }
        

        sort(result.begin(),result.end());
        return result;
    }
};
