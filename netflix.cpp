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
    {"The Notebook", {"Romance", "Drama"}},
    {"The Dark Knight", {"Action", "Drama"}},
    {"Superbad", {"Comedy"}},
    {"The Exorcist", {"Horror"}},
    {"Inception", {"Sci-Fi", "Drama"}},
    {"Harry Potter", {"Fantasy"}},
    {"Titanic", {"Romance", "Drama"}},
    {"Mad Max: Fury Road", {"Action"}},
    {"21 Jump Street", {"Comedy"}},
    {"A Quiet Place", {"Horror", "Sci-Fi"}},
    {"The Lord of the Rings", {"Fantasy", "Drama"}},
    {"Guardians of the Galaxy", {"Action", "Sci-Fi"}},
    {"The Hangover", {"Comedy"}},
    {"Insidious", {"Horror"}},
    {"The Matrix", {"Sci-Fi", "Action"}},
    {"La La Land", {"Romance", "Drama"}}};

int main()
{
    int userInput;

    // infinite loop unless user exits
    while (true)
    {
        cout << "\nNetflix Movie Recommender" << endl;

        cout << "\nChoose a genre:" << endl;
        cout << "1. Action" << endl;
        cout << "2. Comedy" << endl;
        cout << "3. Horror" << endl;
        cout << "4. Sci-Fi" << endl;
        cout << "5. Fantasy" << endl;
        cout << "6. Drama" << endl;
        cout << "7. Romance" << endl;
        cout << "0. Exit\n"
             << endl;

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
        else if (userInput >= 1 && userInput <= 7)
        {
            string selectedGenre = genres[userInput];

            cout << "\nRecommended movies for " << selectedGenre << ":" << endl;

            for (auto movie : movies)
            {
                for (auto genre : movie.second)
                {
                    if (genre == selectedGenre)
                    {
                        cout << "- " << movie.first << endl;
                        break;
                    }
                }
            }
        }
        else
        {
            cout << "Invalid choice. Please select 0-7." << endl;
        }
    }
    return 0;
}