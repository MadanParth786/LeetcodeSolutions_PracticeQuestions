class Solution {
public:
    string kthDdistinct(vector<string>& arr, int k) {
        int n=arr.size();
        vector<string>res;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[i]!=arr[j]){
                    res.push_back(arr[i]);
                    //res.push_back(arr[n-1]);
                }
                else{
                    res.push_back("");
                }
            }
        }
        return(res[k]);
    }
};
