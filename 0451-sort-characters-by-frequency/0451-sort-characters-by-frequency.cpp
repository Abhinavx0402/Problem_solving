class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(int i=0; i<s.size();i++){ // map ko fill kra with freq
            mp[s[i]]++;

        }

        vector<pair<char,int>>v;
        for(auto it : mp){              //map ko sort nhi kr skte that why map ko vector m convert kiya gya h and push kiya gya h
            v.push_back({it.first,it.second});
        }



        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second > b.second;
        });


        string ans="";

        for(int i=0; i<v.size();i++){
            ans.append(v[i].second, v[i].first);
        }
        return ans;
    }
};