#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if (n == 0) return 0;  // If no prices are available
    
    int min_price = INT_MAX;  // Initialize to maximum possible value
    int max_profit = 0;       // Initialize profit to 0
    
    for (int i = 0; i < n; ++i) {
        // Update the minimum price if the current price is lower
        min_price = min(min_price, prices[i]);
        
        // Calculate profit if we sell at the current price
        int profit = prices[i] - min_price;
        
        // Update max_profit if current profit is greater
        max_profit = max(max_profit, profit);
    }
    
    return max_profit;
}

int main() {
    int n;
    
    // Ask the user for the number of days
    cout << "Enter the number of days: ";
    cin >> n;
    
    // Declare a vector to store stock prices
    vector<int> prices(n);
    
    // Take stock prices as input from the user
    cout << "Enter the stock prices for each day: ";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    // Call the function to calculate max profit
    int profit = maxProfit(prices);
    
    // Output the result
    cout << "Maximum Profit: " << profit << endl;

    return 0;
}
