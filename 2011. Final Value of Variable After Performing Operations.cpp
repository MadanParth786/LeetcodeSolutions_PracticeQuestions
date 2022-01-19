class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n;
        n=operations.size();
        int X=0;
        for(int i=0;i<n;i++){
            if(operations[i]=="X--" or operations[i]=="--X"){
                X--;
            }
            else if(operations[i]=="X++" or operations[i]=="++X"){
                X++;
            }

        }
          return X;
      }
};
