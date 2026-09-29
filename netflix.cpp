#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<int, string> genres = {
    {1, "Action"},
    {2, "Comedy"},
    {3, "Horror"}};

map<string, vector<string>> movies = {
    {"Interstellar", {"Sci-Fi", "Drama"}},
    {"John Wick", {"Action", "Thriller"}},
    {"Shrek", {"Comedy", "Fantasy"}},
    {"The Conjuring", {"Horror", "Thriller"}},
    {"The Notebook", {"Romance", "Drama"}}};
int main()
{
    cout << "git test" << endl;
    return 0;
}