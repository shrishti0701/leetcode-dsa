class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;

        // Split s into individual words
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        // Number of pattern characters and words must be same
        if (pattern.length() != words.size()) {
            return false;
        }

        map<char, string> charToWord;
        map<string, char> wordToChar;

        for (int i = 0; i < pattern.length(); i++) {

            char c = pattern[i];
            string w = words[i];

            // Character already mapped
            if (charToWord.count(c)) {
                if (charToWord[c] != w) {
                    return false;
                }
            }

            // Word already mapped
            if (wordToChar.count(w)) {
                if (wordToChar[w] != c) {
                    return false;
                }
            }

            // Create mapping
            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};