class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if (digits.empty())
            return {};

        vector<string> result = {""};

        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        for (char digit : digits) {

            int m = result.size();

            string letters = mapping[digit - '0'];

            for (int i = 0; i < m; i++) {

                string curr = result.front();
                result.erase(result.begin());

                for (char ch : letters) {
                    result.push_back(curr + ch);
                }
            }
        }

        return result;
    }
};