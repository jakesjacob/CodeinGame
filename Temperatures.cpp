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
    int temps[n];
    int closestPos = 0;
    int closestNeg = 0;
    int closest = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t;
        cin.ignore();

        temps[i] = t;
        int size = sizeof(temps);

        sort(temps, temps + size);
    }
    for (int i = 0; i < n; i++)
    {
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
        closest = closestPos;
    }
    else if (math < 0)
    {
        closest = closestNeg;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << closest << endl;
}