#include <iostream>
using namespace std;

int maxProfit(int prices[], const int NUM_MONTHS)
{
    int mostExpensive = 0;
    int cheapest = 100000000;
    int cheapIndex;
    int profit = 0;
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        if (prices[i] < cheapest)
        {
            cheapest = prices[i];
            cheapIndex = i;
        }
    }
    for (int i = cheapIndex; i < NUM_MONTHS; i++)
    {
        if (prices[i] > mostExpensive)
        {
            mostExpensive = prices[i];
        }
    }
    profit = mostExpensive - cheapest;
    if (profit < 0)
    {
        return 0;
    }
    return profit;
}
int main()
{
    const int NUM_MONTHS = 6;
    int prices[NUM_MONTHS] = {700000, 100000, 500000, 300000, 600000, 400000};
    int profit = maxProfit(prices, NUM_MONTHS);
    cout << "Maximum profit: " << profit << endl;
    return 0;
}