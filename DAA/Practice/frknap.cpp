// // Fractional Knapsack
// /*
// We use a Greedy approach to get the optimum solution for the fractional knapsack problem
// Steps for solving:-
//     -> Calculate the ratio(v/w)
//     -> Sort the items based on this ratio
//     -> Take the item with the highest ratio and add them until we can't add the
//        next item as a whole
//     -> At the end add the next item as much as we can(fraction)
// */

#include <bits/stdc++.h>
using namespace std;

// Structure for an item which stores weight and
// corresponding value of Item
typedef struct Item
{
    int value, weight;

    // Constructor
    Item(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
} Item;
// Comparison function to sort Item
// according to val/weight ratio
static bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int N)
{
    // Sorting Item on basis of ratio
    sort(arr, arr + N, cmp);

    double finalvalue = 0;

    // Looping through all items
    for (int i = 0; i < N; i++)
    {

        // If adding Item won't overflow,
        // add it completely
        if (W >= arr[i].weight)
        {
            W -= arr[i].weight;
            finalvalue += arr[i].value;
        }

        // If we can't add current Item,
        // add fractional part of it
        else
        {
            finalvalue += arr[i].value * ((double)W / (double)arr[i].weight);
            break;
        }
    }

    // Returning final value
    return finalvalue;
}

// Driver code
int main()
{
    int W = 50;
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout << fractionalKnapsack(W, arr, N) << endl;
    return 0;
}