// Bash-easy by Codefrogs
//
#include <iostream>
#include <string>
//#include <chrono>
#include <thread>

using namespace std::chrono;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    cout << "cpp-easy by Codefrogs\n" << endl;

    string question{"What is the answer to everything?: "};
    cout << question;

    string answer;
    cin >> answer; // Get response from user

    cout << endl;
    cout << "Deepthought: " << endl;
    cout << "The answer to the ultimate question of life, the universe, and everything is..." << endl;
    std::this_thread::sleep_for(2s);    
    
    cout << answer << "!" << endl << endl;
}
