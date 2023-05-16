#include <iostream>
using namespace std;

bool accept()
{
    cout << "Do you want to proceed (y or n)?\n";   // write question

    char answer = 0;
    cin >> answer;                                  // read answer
    switch(answer)
    {
        case 'y':
            cout << "Accepted.\n";
            return true;
        case 'n':
            cout << "Not accepted.\n";
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

int main()
{
    accept();
}