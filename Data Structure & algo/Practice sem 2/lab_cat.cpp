#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int arr2[], int n1,
                 int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Traverse both array
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
}
int main()
{
    int i;
    int n, o;
    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> o;
    int arr2[o];
    for (int j = 0; j < o; j++)
    {
        cin >> arr2[j];
    }
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n1 + n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    cout << "Array after merging" << endl;
    for (int i = 0; i < n1 + n2; i++)
        cout << arr3[i] << " ";

    return 0;
}