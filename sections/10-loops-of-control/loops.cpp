// cpp-easy by Codefrogs
//

// Control flow:

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;

int main()
{
    cout << "cpp-easy by Codefrogs\n";
    cout << "Control flow\n";
    cout << "------------\n";

    // The perhaps familiar but error prone C-loop.
    // Try to avoid these form.
    // The loops starts with i=0, then checks if 'i' is less than 10, if so it executes the statement, 
    // then increments 'i' using 'i++'.
    //
    cout << "1: for C-loop: ";
    for (int i = 0; i < 10; i++) 
    {
        cout << i << " ";
    }

    cout << "\n";
    
    // Using continue in a for-loop
    cout << "2: Using continue: ";
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0) // % is called the modulo, and returns the remainder of (i / 2).
        {
            continue; // Keep going if 'i' is even. (Don't display the value of i).
        }
        cout << i << " "; // Display the odd value 'i'.
    }

    cout << "\n";

    // Using break.
    // When break is found, the loop/for statement is broken out of.
    // Here we break if 'i' equals '5'.
    //
    cout << "3: Using break: ";
    int num{ 5 };

    for (int i = 0; i <= 100; i++)
    {
        if (i == num)
        {
            cout << i << "\n";
            break;
        }
        cout << i << ", ";
    }

    cout << "4: More modern loop: ";
    int items[] = {0, 1, 2, 3, 4}; // a list of items
    
    // A more modern loop, and less error prone approach.
    // Here, auto tells the compiler to work out type itself.
    for (auto i : items) 
    {
        cout << i << " ";
    }
    cout << "\n";

    // Using while
    cout << "5: Using while: ";
    int seq_cnt{ 0 };
    string found;

    while (found.empty())
    {
        if (seq_cnt > 5)
        {
            found = "Y";
            cout << "Y";
        }
        else
        {
            cout << "N";
        }
        ++seq_cnt;
    }
    cout << "\n";
}
