class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumT = 0;
        for (char ch : t) {
           sumT += ch;
       }
       int sumS = 0;
       for(char ch : s) {
           sumS += ch;
       }
       int diff = sumT - sumS;
       char diffChar = static_cast<char>(diff);
       return diffChar;
    }
};
