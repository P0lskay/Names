#include "Names.h"
#include <iostream>
#include <iterator>
#include <algorithm>

void Person::ChangeFirstName(int year, const string& first_name)
{
    first_name_changing[year] = first_name;
}

void Person::ChangeLastName(int year, const string& last_name)
{
    last_name_changing[year] = last_name;
}

string Person::GetFullName(int year)
{
    auto name = first_name_changing.upper_bound(year);
    auto surname = last_name_changing.upper_bound(year);

    if (name != first_name_changing.begin() && surname != last_name_changing.begin())
    {
        return prev(name)->second + " " + prev(surname)->second;
    }
    else if (name != first_name_changing.begin() && surname == last_name_changing.begin())
    {
        return prev(name)->second + " with unknown last name";
    }
    else if (name == first_name_changing.begin() && surname != last_name_changing.begin())
    {
        return prev(surname)->second + " with unknown first name";
    }
    return "Incognito";

}

int main()
{
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    return 0;
}

