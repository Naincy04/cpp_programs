class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> answer(n);
        for(int i = 0; i < n; i++) {
            answer[i] = to_string(score[i]);
        }
        int temp = 0,i,j;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(score[i] > score[j])
                {
                    temp = score[i];
                    score[i] = score[j];
                    score[j] = temp;
                }
            }
        }
       
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(to_string(score[i])==answer[j])
                {
                    if(i==0)
                    {
                        answer[j] = "Gold Medal";
                    }
                    else if(i==1)
                    {
                        answer[j] = "Silver Medal";
                    }
                    else if(i==2)
                    {
                        answer[j] = "Bronze Medal";
                    }
                    else
                    {
                        answer[j] = to_string(i+1);
                    }
                }
            }
        }
        return answer;
       
    }
};