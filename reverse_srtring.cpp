#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

string reverseWords(const string &str) {
    vector<string> words;
    string word;
    string result;
    
    // Extract words from the string
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    
    // Reverse the order of words
    reverse(words.begin(), words.end());
    
    // Build the result string with reversed words
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) {
            result += " "; // Add space between words
        }
        result += words[i];
    }

    return result;
}

int main() {
    string str = "Hello world this is C++";
    string reversedStr = reverseWords(str);

    cout << "Original string: " << str << endl;
    cout << "Reversed words: " << reversedStr << endl;

    return 0;
}
