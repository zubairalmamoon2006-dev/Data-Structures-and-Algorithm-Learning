class Solution {
public:
    void find_combination(vector<int> &arr, int ind, vector<int> &ds, vector<vector<int>> &ans, int target){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            find_combination(arr, ind, ds, ans, target-arr[ind]);
            ds.pop_back();
        }
        find_combination(arr, ind+1, ds, ans, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        find_combination(candidates, 0, ds, ans, target);
        return ans;
    }
};