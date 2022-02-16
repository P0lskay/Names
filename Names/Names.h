#pragma once
#include <string>
#include <map>
#include <stack>

using namespace std;

class Person {
public:
    Person();
    void ChangeFirstName(int year, const string& first_name); // добавить факт изменения имени на first_name в год year
    void ChangeLastName(int year, const string& last_name);   // добавить факт изменения фамилии на last_name в год year
    string GetFullName(int year); // получить имя и фамилию по состоянию на конец года year с помощью двоичного поиска
private:
    stack <pair<int, string>> first_name_changing;
    stack <pair<int, string>> last_name_changing;
};