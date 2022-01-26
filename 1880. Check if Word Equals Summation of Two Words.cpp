class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int f=0,se=0,ta=0;
        for(int i=0;i<firstWord.size();i++)
            f=f*10 + (firstWord[i]-'a');
        
        for(int i=0;i<secondWord.size();i++)
            se=se*10 +(secondWord[i]-'a');
        
        for(int i=0;i<targetWord.size();i++)
            ta=ta*10 +(targetWord[i]-'a');
        
        return(f+se==ta);
    }
};
