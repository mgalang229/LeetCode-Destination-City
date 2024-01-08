class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> outgoing, ingoing;
        for (vector<string>& p : paths) {
            outgoing.insert(p[0]);
            ingoing.insert(p[1]);
        }
        string ans = "";
        for (auto city : ingoing) {
            if (outgoing.find(city) == outgoing.end()) {
                ans = city;
                break;
            }
        }
        return ans;
    }
};
