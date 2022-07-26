#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int countPairs(const vector<vector<int>> &matrix, int index)
{
    int sum = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = i; j < matrix.size(); j++)
        {
            if (i != index && j != index && (matrix[i][j] == 1 || matrix[i][j] == 1))
            {
                sum++;
            }
        }
    }
    return sum;
}

int knapsackRecursive(const vector<int> &losses, const vector<vector<int>> &matrix, int m, int currentIndex)
{
    // base checks
    if (currentIndex >= losses.size() || m == 0)
    {
        return 0;
    }

    // recursive call after choosing the element at the currentIndex
    // if the weight of the element at currentIndex exceeds the capacity, we shouldn't process this
    int loss1 = 0;
    int pairs = countPairs(matrix, currentIndex);
    if (pairs % 2 == 0)
    {
        loss1 =
            losses[currentIndex] +
            knapsackRecursive(losses, matrix, m - pairs, currentIndex + 1);
    }
    // recursive call after excluding the element at the currentIndex
    int loss2 = knapsackRecursive(losses, matrix, m, currentIndex + 1);

    return min(loss1, loss2);
}

int solveKnapsack(const vector<int> &losses, const vector<vector<int>> &matrix, int m)
{
    return knapsackRecursive(losses, matrix, m, 0);
}

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;
            matrix[a - 1][b - 1] = 1;
        }
        if (m % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << solveKnapsack(v, matrix, m) << endl;
        }
    }
}