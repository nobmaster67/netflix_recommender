#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<int, string> genres = {
    {1, "Action"},
    {2, "Comedy"},
    {3, "Horror"},
    {4, "Sci-Fi"},
    {5, "Fantasy"},
    {6, "Drama"},
    {7, "Romance"}};

map<string, vector<string>> movies = {
    {"Interstellar", {"Sci-Fi", "Drama"}},
    {"John Wick", {"Action", "Thriller"}},
    {"Shrek", {"Comedy", "Fantasy"}},
    {"The Conjuring", {"Horror", "Thriller"}},
    {"The Notebook", {"Romance", "Drama"}}};

int main()
{
    int userInput;

    cout << "Netflix Movie Recommender" << endl;

    // infinite loop unless user exits
    while (true)
    {
        cout << "\nChoose a genre:" << endl;
        cout << "1. Action" << endl;
        cout << "2. Comedy" << endl;
        cout << "3. Horror" << endl;
        cout << "4. Sci-Fi" << endl;
        cout << "5. Fantasy" << endl;
        cout << "6. Drama" << endl;
        cout << "7. Romance" << endl;
        cout << "0. Exit" << endl;

        cin >> userInput;

        // error handling for non int inputs
        if (cin.fail())
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (userInput == 0)
        {
            break;
        }
    }

    return 0;
}