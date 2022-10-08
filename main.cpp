#include <iostream>

int main()
{
    using namespace std;
    {
        unsigned int counter = 0;
        string input;
        cout << "Welcome to Clicker(Beta)!" << endl << "Click away to have your way!" << endl;
        cout << "Press Enter to click and press 'q' to quit." << endl << endl;
        cout << "Clicks: " << counter << endl;
        while(getline(cin, input) && input != "q")
        {
            counter++;
            cout << "Clicks: " << counter << endl;
        }

    } // namespace name
    
    return 0;
}