#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int ma = 0;

int fire;

int mrange[7];

int main()
{
    

    // game loop
    while (1) {
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();

            mrange[i] = mountainH;

        }int temp = 0;
        for (int i = 0; i < 8; i++) {
            
            if (mrange[i] > temp) {
                fire = i;
                temp = mrange[i];
            }
        }



        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << fire << endl; // The index of the mountain to fire on.
    }
}