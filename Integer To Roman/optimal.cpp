class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        vector<pair<int, string>> stringToRoman = { {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };
        for (int i = 0;i < stringToRoman.size();i++) {
            while (num >= stringToRoman[i].first) {
                roman += stringToRoman[i].second;
                num -= stringToRoman[i].first;
            }
        }
        return roman;
    }
};