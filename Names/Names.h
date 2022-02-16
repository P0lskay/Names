#pragma once
#include <string>
#include <map>
#include <stack>

using namespace std;

class Person {
public:
    Person();
    void ChangeFirstName(int year, const string& first_name); // �������� ���� ��������� ����� �� first_name � ��� year
    void ChangeLastName(int year, const string& last_name);   // �������� ���� ��������� ������� �� last_name � ��� year
    string GetFullName(int year); // �������� ��� � ������� �� ��������� �� ����� ���� year � ������� ��������� ������
private:
    stack <pair<int, string>> first_name_changing;
    stack <pair<int, string>> last_name_changing;
};