#include <iostream>

int main()
{
    // 'cout' example.
    std::cout << "This is an example of output using cout.\n" ;

    // Some times people use 'endl' instead of '\n' for a new line.
    // It's much slower, but when speed isn't an issue, then it's just
    // a question of style.

    std::cout << "This line of text uses 'endl'" << std::endl ;

    // This is slower, as endl also does what is known as a 'flush'.
    // i.e. anything pending to be shown is sent out immediately.

    return 0;
}
