class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int m = s.length();
        long long MOD = 1e9 + 7;
        
        // Precompute powers of 10 modulo 10^9 + 7
        vector<long long> power10(m + 1, 1);
        for (int i = 1; i <= m; i++) {
            power10[i] = (power10[i - 1] * 10) % MOD;
        }
        
        // 1-based indexing for prefix arrays to handle boundaries cleanly
        vector<long long> P(m + 1, 0); // Prefix Value
        vector<int> C(m + 1, 0);       // Prefix Count of non-zeros
        vector<long long> S(m + 1, 0); // Prefix Sum of digits
        
        for (int i = 0; i < m; i++) {
            int digit = s[i] - '0';
            
            if (digit != 0) {
                P[i + 1] = (P[i] * 10 + digit) % MOD;
                C[i + 1] = C[i] + 1;
                S[i + 1] = (S[i] + digit) % MOD;
            } else {
                P[i + 1] = P[i];
                C[i + 1] = C[i];
                S[i + 1] = S[i];
            }
        }
        
        vector<int> answer;
        
        // Answer each query in O(1) time
        for (const auto& q : queries) {
            int l = q[0] + 1; // Convert to 1-based index
            int r = q[1] + 1; // Convert to 1-based index
            
            long long sum = (S[r] - S[l - 1] + MOD) % MOD;
            int k = C[r] - C[l - 1];
            
            // Extract x using string hashing formula
            long long x = (P[r] - (P[l - 1] * power10[k]) % MOD + MOD) % MOD;
            
            long long query_ans = (x * sum) % MOD;
            answer.push_back(query_ans);
        }
        
        return answer;
    }
};