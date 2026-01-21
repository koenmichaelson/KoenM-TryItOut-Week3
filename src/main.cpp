/*
Make a program where you enter the height of a pyramid
and the program will print out that pyramid.

For example, if I was to type 5, it would show
     *
    * *
   * * *
  * * * *
* * * * * *

If I was to type 3 it would show
   *
  * *
* * * *

*/

#include <iostream>
#include <string>

int main() {

    // Delared Variable
    int pyramidHeight = 0;
    bool keepBuilding = true;

    while (keepBuilding) {

        //Initial user input
        std::cout << "Type in how tall you would like your pyramid!\n";
        std::cin >> pyramidHeight;

        if (pyramidHeight == -1) {
            break;
        }

        // Main Iteration for constucting each row

        for (int row = 1; row <= pyramidHeight; row++) {


            // Calulate empty spaces
            int emptySpaces = (pyramidHeight + 1) - row;

            // Places each empty space required
            for (int i = 1; i < emptySpaces; i++) {

                std::cout << " ";
            }

            // Places the stars
            for (int star = 0; star < row; star++) {

                std::cout << " *";

            }

            //Starts new row
            std::cout << " \n";

        }

        // Explain Exiting Loop
        std::cout << "\n" << "Type in -1 to exit\n";




    }



   


}