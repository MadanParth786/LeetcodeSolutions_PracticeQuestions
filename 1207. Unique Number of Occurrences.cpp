class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int a,b,c;
        a=b=c=0;
        for(int i=0;i<arr.size();i++){
            for(int j=1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    a+=1;
                }
                else if(arr[i+1]==arr[j]){
                    b+=1;
                }
                else{
                    c++;
                }
            }
        }
        if(a!=b!=c){
            return true;
        }
        else{
            return (false);
        }
        
    }
};
