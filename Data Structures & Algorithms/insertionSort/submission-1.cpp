// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {

        int n=pairs.size();
        if(n<=0)
        return {};
        vector<vector<Pair> >res;
        res.push_back(pairs);

        for(int i=1;i<n;++i)
        {
            Pair keypair=pairs[i];
            int j=i-1;
            while(j>=0&&pairs[j].key>keypair.key)
            {
                pairs[j+1]=pairs[j];
                j--;
            }
            pairs[j+1]=keypair;
            vector<Pair> cur_state;
            for (const auto& x : pairs) {
                cur_state.push_back(x);
            }
            res.push_back(cur_state);

            
        }
        return res;


    }
};
