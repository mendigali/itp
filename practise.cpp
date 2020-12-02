#include <iostream>
#include <string>

struct Footballers
{
    std::string name_of_footballer;
    std::string country;
};

struct Footbal_club
{
    std::string club_title;
    int club_footballersCount;
    Footballers *smth;
};

int main()
{
    int n;
    std::cout << "sum of footbal clubs: ";
    (std::cin >> n).get();
    Footbal_club *pointer = new Footbal_club[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "name of footbal club: ";
        std::getline(std::cin, pointer[i].club_title);
        std::cout << "sum of footballers: ";
        (std::cin >> pointer[i].club_footballersCount).get();
        Footballers *footballers = new Footballers[pointer[i].club_footballersCount];
        for (int j = 0; j < pointer[i].club_footballersCount; j++)
        {
            std::cout << "name of footballers: ";
            std::getline(std::cin, footballers[j].name_of_footballer);
            std::cout << "his country: ";
            std::getline(std::cin, footballers[j].country);
        }
        pointer[i].smth = footballers;
    }
    std::string s;
    std::getline(std::cin, s);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < pointer[i].club_footballersCount; j++)
        {
            if (s == pointer[i].smth[j].country)
            {
                std::cout << pointer[i].club_title << std::endl;
                break;
            }
        }
    }
    return 0;
}