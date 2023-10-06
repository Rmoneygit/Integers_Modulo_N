// File: Integers_Modulo_N.cpp
// Author: Ryan P.
// Timestamp: <Oct-05-2023> 22:58:21 PST

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);

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
)" << "                     " << argv[1] << endl << endl;
    string topLine = " + |";
    string seperatingLine = "----";
    for (int i = 0; i < n; i++)
    {
        topLine.append(" " + to_string(i));
        topLine.append(" |");
        seperatingLine.append("----");
    }

    cout << topLine << endl;
    cout << seperatingLine << endl;

    for (int i = 0; i < n; i++)
    {
        string nextLine = " ";
        nextLine.append(to_string(i));
        nextLine.append(" | ");

        for (int j = 0; j < n; j++)
        {
            int entry = (i * j) % n;
            nextLine.append(to_string(entry));
            nextLine.append(" | ");
        }
        cout << nextLine << endl;
    }
    

    return 0;
}
