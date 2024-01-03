// Cpp-Easy by Codefrogs

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string first{"Usain"} ;
    string surname{"Bolt"} ;
    string full_surname{"Usain Bolt"} ;

    string::size_type len{ full_surname.length() } ;
    cout << "Name length: " << len << endl; 
   
    cout << "First: "   << first        << endl ;
    cout << "Surname: " << surname      << endl ;
    cout << "Full: "    << full_surname << endl ;

    bool found = full_surname.starts_with(first);
    cout << "Using string.starts_with(" << first << ")" << endl;
    cout << "Found result: " << found << endl;

    return 0;
}
