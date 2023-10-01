class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word;
        string reversed;

         while (iss >> word) {
            reverse(word.begin(), word.end());
            reversed += word + " ";
        }
        if (!reversed.empty()) {
            reversed.pop_back();
        }
        return reversed;
    }
};
