#include <iostream>
using namespace std;

bool accept()
{
    int tries = 1;
    while (tries<4)
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
                ++tries;   // increment
        }
    }
}

int main()
{
    accept();
}