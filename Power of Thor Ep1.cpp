#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    int thorX = initialTX;
    int thorY = initialTY;
    string direction;
    string vert;
    string hori;


    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        //thorX = thorX;
        //thorY = thorY;

        vert = "";
        hori = "";
        //direction = "";

        if (thorX > lightX && thorX > 0) {
            vert = "W";
            thorX = thorX - 1;
        }
        if (thorX < lightX && thorX < 39) {
            vert = "E";
            thorX = thorX + 1;
        }



        if (thorY > lightY && thorY > 0) {
            hori = "N";
            thorY = thorY - 1;
        }
        if (thorY < lightY && thorY < 17) {
            hori = "S";
            thorY = thorY + 1;
        }


        direction = hori + vert;

        //cerr << printf ("%s \n", direction.c_str()) << endl;


        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << direction << endl;
    }
}