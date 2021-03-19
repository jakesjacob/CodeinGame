#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse

    int closestPos = 0;
    int closestNeg = 0;
    int closest = 0;
    cin >> n;
    cin.ignore();
    int temps[n];
    for (int i = 0; i < n; i++)
    {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t;
        cin.ignore();

        temps[i] = t;
    }

    int size = sizeof(temps) / sizeof(temps[0]);
    sort(temps, temps + size);

    for (int i = 1; i < n; i++)
    {
        if (temps[0] > 0)
        {
            closestPos = temps[0];
        }
        else if (temps[0] < 0)
        {
            closestNeg = temps[0];
        }

        if (temps[i] > 0 && temps[i] < temps[i - 1])
        {
            closestPos = temps[i];
        }
        else if (temps[i] < 0 && temps[i] > temps[i - 1])
        {
            closestNeg = temps[i];
        }
    }

    int math = closestPos + closestNeg;

    if (math >= 0)
    {
        closest = closestNeg;
    }
    else if (math < 0)
    {
        closest = closestPos;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << closest << endl;
}