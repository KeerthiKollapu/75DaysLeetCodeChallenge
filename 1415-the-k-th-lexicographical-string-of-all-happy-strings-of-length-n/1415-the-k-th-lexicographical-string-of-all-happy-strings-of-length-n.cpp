class Solution {
public:
    string getHappyString(int n, int k) {
       vector<string> result;
        string current;
        dfs(n, current, result);
        
        if (k > result.size()) return "";
        return result[k - 1];
    }
    
private:
    void dfs(int n, string& current, vector<string>& result) {
        if (current.size() == n) {
            result.push_back(current);
            return;
        }
        
        for (char c : {'a', 'b', 'c'}) {
            if (!current.empty() && current.back() == c) continue;
            current.push_back(c);
            dfs(n, current, result);
            current.pop_back();
        }
     
    }
};