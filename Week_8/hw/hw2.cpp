#include <iostream>
#include <iomanip>
using namespace std;

void stepCountCumulativeSum(int daily_steps[], const int NUM_DAYS, int cumulative_steps[])
{
    for (int i = 0; i < NUM_DAYS; i++)
    {
        if (i == 0)
        {
            cumulative_steps[0] = daily_steps[i];
        }
        else
        {
            cumulative_steps[i] = daily_steps[i] + cumulative_steps[i - 1];
        }
    }
}

double stepCountDeviation(int daily_steps[], const int NUM_DAYS, const int OPTIMAL_STEP_COUNT)
{
    int totalSteps = 0;
    double deviation;
    for(int i = 0; i < NUM_DAYS; i++){
        totalSteps = totalSteps + daily_steps[i];
    }
    totalSteps = totalSteps/NUM_DAYS;
    deviation = totalSteps - OPTIMAL_STEP_COUNT;
    return deviation;
}
int main()
{
    const int NUM_DAYS = 5;
    int daily_steps[NUM_DAYS] = {5000, 4000, 5000, 2000, 4000};
    const int OPTIMAL_STEP_COUNT = 5000;
    double deviation = stepCountDeviation(daily_steps, NUM_DAYS, OPTIMAL_STEP_COUNT);
    // We are printing the deviation up to 3 decimal
    // places
    cout << fixed << setprecision(3) << deviation << endl;
    return 0;
}