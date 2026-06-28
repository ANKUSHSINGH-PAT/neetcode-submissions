class Solution {
public:

string s="";

    string encode(vector<string>& strs) {
        
        for(auto x:strs)
        {
            s+=x;
            s+='`';
        }

        return s;

    }

    vector<string> decode(string s) {

        vector<string>v;
        cout<<s<<endl;

        for(int i=0;i<s.size();i++)
        {
            char k=s[i];
            string str="";
            int j=i;
            while(s[j]!='`')
            {
                 str+=s[j];
                 j++;
            }
            v.push_back(str);
            i=j;
        }
        return v;



    }
};
