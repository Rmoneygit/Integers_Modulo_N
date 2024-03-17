// File: Integers_Modulo_N.cpp
// Author: Ryan P.
// Timestamp: <Oct-05-2023> 22:58:21 PST

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string textN;
    int n;
    
    printf("Enter an integer modulus:");

    cin >> textN;
    n = stoi(textN);

    int cellSize = textN.length() + 1;

    cout << R"(
    \\\\\\\\\\\\\\\\
                 \\\
               \\\
             \\\
           \\\
         \\\
       \\\
     \\\
    \\\\\\\\\\\\\\\\ 
)" << "                     " << n << endl << endl;
    
    // Create the top row of the table, looking something like this:
//    +|   0|   1|   2|   3|   4|   5|   6|   7|   8|   9|  10|  11|
// -----------------------------------------------------------------

// Top left cell just contains the multiplcation symbol.
    cout << setfill(' ');
    cout << right << setw(cellSize) << "+" << "|";

    // Print a cell for each element of Z_n.
    for (int i = 0; i < n; i++)
    {
        cout << right << setw(cellSize) << i << "|";
    }
    cout << endl;

    // Print a dividing line. Iterate n + 1 times to account for the addition symbol cell
    cout << setfill('-');
    for (int i = 0; i < n + 1; i++)
    {
        // Add one dash to account for the | pipe symbol dividing each cell.
        cout << right << setw(cellSize + 1) << "";
    }
    cout << endl;

    cout << setfill(' ');

    // Now create each row of the n rows in the addition table.
    for (int i = 0; i < n; i++)
    {
        // Row in the table for the number n
        cout << right << setw(cellSize) << i << "|";

        // Compute the sum for each cell and print.
        for (int j = 0; j < n; j++)
        {
            int entry = (i + j) % n;

            cout << right << setw(cellSize) << entry << "|";
        }

        cout << endl;
    }
    
    cout << "\n\n\n";

    // Create the top row of the table, looking something like this:
    //    *|   0|   1|   2|   3|   4|   5|   6|   7|   8|   9|  10|  11|
    // -----------------------------------------------------------------
    
    // Top left cell just contains the multiplcation symbol.
    cout << setfill(' ');
    cout << right << setw(cellSize) << "*" << "|";

    // Print a cell for each element of Z_n.
    for (int i = 0; i < n; i++)
    {
        cout << right << setw(cellSize) << i << "|";
    }
    cout << endl;

    // Print a dividing line. Iterate n + 1 times to account for the mult. symbol cell
    cout << setfill('-');
    for (int i = 0; i < n + 1; i++)
    {
        // Add one dash to account for the | pipe symbol dividing each cell.
        cout << right << setw(cellSize + 1) << "";
    }
    cout << endl;

    cout << setfill(' ');

    // Now create each row of the n rows in the multiplication table.
    for (int i = 0; i < n; i++)
    {
        // Row in the table for the number n
        cout << right << setw(cellSize) << i << "|";

        // Compute the product for each cell and print.
        for (int j = 0; j < n; j++)
        {
            int entry = (i * j) % n;

            cout << right << setw(cellSize) << entry << "|";
        }

        cout << endl;
    }
    

    return 0;
}
