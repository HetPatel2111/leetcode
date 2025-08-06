class Solution {
public:
    string intToRoman(int num) {
    multimap<int, string, greater<int>> roman; // Sort in descending order
    roman.insert({1000, "M"});
    roman.insert({900, "CM"});
    roman.insert({500, "D"});
    roman.insert({400, "CD"});
    roman.insert({100, "C"});
    roman.insert({90, "XC"});
    roman.insert({50, "L"});
    roman.insert({40, "XL"});
    roman.insert({10, "X"});
    roman.insert({9, "IX"});
    roman.insert({5, "V"});
    roman.insert({4, "IV"});
    roman.insert({1, "I"});
    
    string result = "";
    for (auto &p : roman) {
        while (num >= p.first) {
            num -= p.first;
            result += p.second;
        }
    }
    return result;
}
};