// g++ -std=c++11 -o output 0121.cpp

#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        
        // for (int i = 1; i < prices.size(); ++i) {
        //     minPrice = std::min(minPrice, prices[i]);
		// 	std::cout << "minPrice: " << minPrice << std::endl;
        //     maxProfit = std::max(maxProfit, prices[i] - minPrice);
		// 	std::cout << "maxProfit: " << maxProfit << std::endl << std::endl;
        // }

		for (int num : prices) {
    		minPrice = std::min(minPrice, num);
    		//std::cout << "minPrice: " << minPrice << std::endl;

    		maxProfit = std::max(maxProfit, num - minPrice); 
    		//std::cout << "maxProfit: " << maxProfit << std::endl << std::endl;
}
        
        return maxProfit;
    }
};

int main() {
	Solution solution;
	std::vector<int> prices = {7, 1, 5, 3, 6, 4};
	std::cout << solution.maxProfit(prices) << std::endl;
	return 0;
}