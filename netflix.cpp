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

map<string, string> descriptions = {
    {"Interstellar", "Astronauts travel through a wormhole in a desperate search for a new home for humanity."},
    {"John Wick", "A retired hitman returns to the underworld to avenge a personal loss."},
    {"Shrek", "A grumpy ogre sets out to rescue a princess and ends up finding friendship."},
    {"The Conjuring", "Paranormal investigators help a family terrorized by a haunting in their farmhouse."},
    {"The Notebook", "A young couple from different backgrounds fall in love across decades."},
    {"The Dark Knight", "Batman faces the Joker, a chaotic criminal who pushes Gotham to its limits."},
    {"Superbad", "Two high school friends chase one wild night before graduation."},
    {"The Exorcist", "A mother seeks help from two priests when her daughter shows disturbing signs of possession."},
    {"Inception", "A thief who steals secrets from dreams is given a job to plant an idea instead."},
    {"Harry Potter", "An orphan discovers he is a wizard and begins his first year at a magic school."},
    {"Titanic", "A young artist and a wealthy passenger fall in love aboard the doomed ocean liner."},
    {"Mad Max: Fury Road", "A drifter and a rebel warrior race across a wasteland to escape a tyrant."},
    {"21 Jump Street", "Two mismatched cops go undercover as students to bust a drug ring at a high school."},
    {"A Quiet Place", "A family must live in total silence to hide from creatures that hunt by sound."},
    {"The Lord of the Rings", "A hobbit and his companions journey to destroy a powerful ring and save Middle-earth."},
    {"Guardians of the Galaxy", "A band of misfits teams up to stop a villain from seizing a powerful artifact."},
    {"The Hangover", "Three friends wake up after a bachelor party with no memory and a missing groom."},
    {"Insidious", "A family tries to save their son who is trapped in a dark spirit realm."},
    {"The Matrix", "A hacker learns his reality is a simulation and joins a rebellion against its machine rulers."},
    {"La La Land", "A jazz pianist and an aspiring actress chase their dreams and struggle to keep their romance."}};

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
                        cout << "- " << movie.first << ": " << descriptions[movie.first] << endl;
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