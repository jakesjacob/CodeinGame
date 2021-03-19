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

    for (int i = 0; i < n; i++)
    {
        if (closest == 0)
        {
            closest = temps[i];
        }
        else if (temps[i] > 0 && temps[i] <= abs(closest))
        {
            closest = temps[i];
        }
        else if (temps[i] < 0 && -temps[i] < abs(closest))
        {
            closest = temps[i];
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << closest << endl;
}