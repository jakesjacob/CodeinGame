#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

string row1[5][134];

string row2[27];

int main()
{
    int L;
    cin >> L;
    cin.ignore();
    int H;
    cin >> H;
    cin.ignore();
    string T;
    getline(cin, T);

    //Filling up the 2d array
    for (int i = 0; i < H; i++)
    {
        string ROW;
        getline(cin, ROW);

        int temp = 0;
        //splitting the ascii data into sets of 5 and putting them into an array
        for (unsigned k = 0; k < ROW.length(); k += 4)
        {
            row2[temp] = ROW.substr(k, 4);
            temp += 1;
        }

        // putting each split string into a 2d array
        for (int j = 0; j < 27; j++)
        {
            row1[i][j] = row2[j];
        }
    }

    //cerr << row1[0][2] << endl;

    string input = T;
    int length = input.length();

    char charArray[length];
    strcpy(charArray, input.c_str());

    //charArray = ToUpper(charArray0);

    //for (int j = 0; j < 134; j++) {
    //         row1[i][j] = ROW;
    //    }

    //cerr << charArray[3] << endl;

    //char arr[1] = {'a'};

    char available[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' '};

    int index[length];

    //checking if each character of the input matches one of our available values. if it does then set the index of avaiulbale value in a index array. if not set it as ?.
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (charArray[i] == available[j])
            {
                index[i] = j;
            }
            else
            {
                //index[i] = 26;
            }
        }
    }

    //cerr << index[0] << endl;

    string result1[length];
    string result2[length];
    string result3[length];
    string result4[length];
    string result5[length];

    //use the index numbers to display the correct ascci art
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (index[i] == j)
            {
                int ascistart = index[i];
                for (int k = 0; k < H; k++)
                {
                    if (k == 0)
                    {
                        result1[i] = row1[k][ascistart];
                    }
                    if (k == 1)
                    {
                        result2[i] = row1[k][ascistart];
                    }
                    if (k == 2)
                    {
                        result3[i] = row1[k][ascistart];
                    }
                    if (k == 3)
                    {
                        result4[i] = row1[k][ascistart];
                    }
                    if (k == 4)
                    {
                        result5[i] = row1[k][ascistart];
                    }
                }
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << result1[i];
    }
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << result2[i];
    }
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << result3[i];
    }
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << result4[i];
    }
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << result5[i];
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}