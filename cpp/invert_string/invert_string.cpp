// g++ -std=c++11 invert_string.cpp -o out

#include <iostream>
#include <string>
using namespace std;

// reverts in place
// class StringInverter {
// public:
//     string invertString(string s) {
//         int n = s.length();
//         for (int i = 0; i < n / 2; ++i) {
//             char temp = s[i];
//             s[i] = s[n - i - 1];
//             s[n - i - 1] = temp;
//         }
//         return s;
//     }
// };

// creates a new string
class StringInverter {
public:
    std::string invertString(const std::string& s) {
        std::string inverted;
        for (int i = s.length() - 1; i >= 0; --i) {
            inverted.push_back(s[i]);
        }
        return inverted;
    }
};

// // no push_back
// class StringInverter {
// public:
//     std::string invertString(const std::string& s) {
//         std::string inverted;
//         for (int i = s.length() - 1; i >= 0; --i) {
//             inverted += s[i];
//         }
//         return inverted;
//     }
// };

int main() {
    StringInverter inverter;
    
    string input = "Hello, World!";
    cout << "Original string: " << input << endl;

    string inverted = inverter.invertString(input);
    cout << "Inverted string: " << inverted << endl;

    return 0;
}
