// g++ -std=c++17 0290.cpp -o out


#include <iostream>
#include <unordered_map>
#include <map>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        std::map<char, char> map1;
        std::map<char, char> map2;

        int flag = true;
        for (int i = 0; i < s.size() && flag; i++){
            if ((map1.count(s[i]) || map2.count(t[i]))
				&& (map1[s[i]] != t[i] || map2[t[i]] != s[i])){
                flag = false;  
            }

            else {
                map1[s[i]] = t[i];
                map2[t[i]] = s[i]; 
            }
        }
        return flag;
    }
};

// class Solution {
// public:
//     bool isIsomorphic(std::string s, std::string t) {
// 		std::unordered_map<char, char> s_to_t;
// 		std::unordered_map<char, char> t_to_s;

// 		if (s.size() != t.size())
// 			return false;


// 		// for (char c : s) {
// 		for (int i = 0; i < s.size(); i++) {

// 			char s_char = s[i];
// 			char t_char = t[i];
// 			//std::cout << s_char << std::endl;
// 			//std::cout << t_char << std::endl;

// 			// s_to_t[s_char] = t_char;
// 			// t_to_s[t_char] = s_char;
// 			// doesnt return bool, retuns ITERATOR
// 			// check if mapping from s to t already exists
// 			if (s_to_t.find(s_char) != s_to_t.end()) {
// 				if (s_to_t[s_char] != t_char)
//                     return false;
// 			//	s_to_t[s_char] = t_char; // create map inserate
// 			}
// 			else // insert mappings into the maps if they don't already exist.
// 				s_to_t[s_char] = t_char; // create map inserate

// 			if (t_to_s.find(t_char) != t_to_s.end()) {
// 				if (t_to_s[t_char] != s_char)
//                     return false;
// 			//	t_to_s[t_char] = s_char; // create map inserate
// 			}
// 			else // insert mappings into the maps if they don't already exist.
// 				t_to_s[t_char] = s_char; // create map inserate
// 		}

// 		// // Print the mappings in st
//         // std::cout << "Mappings in st:" << std::endl;
//         // for (const auto& pair : st) {
//         //     std::cout << pair.first << " -> " << pair.second << std::endl;
//         // }

//         // // Print the mappings in ts
//         // std::cout << "Mappings in ts:" << std::endl;
//         // for (const auto& pair : ts) {
//         //     std::cout << pair.first << " -> " << pair.second << std::endl;
//         // }

// 		return true;
//     }
// };


int main(){
	Solution solution;
	std::string a = "lol";
	std::string b = "kek";

	std::string a1 = "hell";
	std::string b1 = "boat";
	std::cout << std::boolalpha << solution.isIsomorphic(a, b) << std::endl;
	std::cout << std::boolalpha << solution.isIsomorphic(a1, b1) << std::endl;

	return 0; 
}

