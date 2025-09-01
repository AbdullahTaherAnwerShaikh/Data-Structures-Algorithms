class Solution {
public:
    string minWindow(string s, string t) {



        if (t.length() > s.length()) return "";

        vector<string> mp;

        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int> tCount;
            for (char c : t) tCount[c]++;  // frequency map of t

            string mapper = "";
            for (int j = i; j < s.length(); j++) {
                char c = s[j];
                mapper += c;

                // If this char is in tCount and still needed, decrease its count
                if (tCount.find(c) != tCount.end() && tCount[c] > 0) {
                    tCount[c]--;
                }

                // Check if all characters have been found
                bool done = true;
                for (auto& p : tCount) {
                    if (p.second > 0) {
                        done = false;
                        break;
                    }
                }

                if (done) {
                    mp.push_back(mapper);
                    break; // stop this window, move to next i
                }
            }
        }

        if (mp.empty()) return "";

        string minLength = mp[0];
        for (const string& str : mp) {
            if (str.length() < minLength.length()) {
                minLength = str;
            }
        }

        return minLength;


    }
};