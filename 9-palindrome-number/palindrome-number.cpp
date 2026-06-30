class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int> arr;
        for(int i=0; x>0; i++){
            arr.push_back(x%10);
            x=x/10;
        }
        bool flag=true;
        for(int i=0; i<arr.size()/2; i++){
            if(arr[i]!=arr[arr.size()-1-i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};