#include <iostream>
#include <unordered_map>
#include <stack>
#include <string> // Ensure to include string

using namespace std;

bool isValid(string s) {
    unordered_map<char, char> matchingBracket;
    matchingBracket[')'] = '(';
    matchingBracket['}'] = '{';
    matchingBracket[']'] = '[';

    stack<char> stk;


        for (char& c : s) {
        if (matchingBracket.find(c) != matchingBracket.end()) {  // checks if character(bracket) is available in map
            if (stk.empty() || stk.top() != matchingBracket[c]) {
                return false;
            }
            stk.pop();
        } else {
            stk.push(c);
        }
    }

    return stk.empty();
}

int main() {
    string test1 = "()[]{}";
    string test2 = "(]";
    string test3 = "([{}])";
    string test4 = "[(])";

    cout << "Test 1: " << (isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << (isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << (isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test 4: " << (isValid(test4) ? "Valid" : "Invalid") << endl;

    return 0;
}
