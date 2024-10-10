#include <iostream>
#include <vector>
using namespace std;

// Function to solve the sum-of-subset problem using backtracking
string sum_of_subset_backtracking(int n, vector<int> &arr, int expected_sum)
{
    // Define a nested function to perform the actual backtracking
    function<pair<bool, vector<int>>(vector<int>, int, int)> backtrack;
    backtrack = [&](vector<int> current_set, int current_sum, int idx) -> pair<bool, vector<int>>
    {
        if (current_sum == expected_sum)
        {
            return make_pair(true, current_set);
        }
        if (current_sum > expected_sum || idx == n)
        {
            return make_pair(false, vector<int>());
        }

        // Try including the current element
        current_set.push_back(1);
        auto [found, subset] = backtrack(current_set, current_sum + arr[idx], idx + 1);
        if (found)
        {
            return make_pair(true, subset);
        }

        // Backtrack by removing the current element
        current_set.pop_back();
        auto [found2, subset2] = backtrack(current_set, current_sum, idx + 1);
        if (found2)
        {
            return make_pair(true, subset2);
        }

        return make_pair(false, vector<int>());
    };

    // Start with an empty set and a sum of 0
    vector<int> current_set;
    int current_sum = 0;

    auto [found, subset] = backtrack(current_set, current_sum, 0);
    if (found)
    {
        // Convert the subset to a fixed-length bitwise format
        string result;
        for (auto bit : subset)
        {
            result += to_string(bit);
        }
        return result;
    }
    else
    {
        return "No subset found";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int expected_sum;
    cin >> expected_sum;

    // Call the backtracking function and print the result
    string result = sum_of_subset_backtracking(n, arr, expected_sum);
    cout << result << endl;

    return 0;
}
