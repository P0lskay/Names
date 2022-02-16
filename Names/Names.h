#pragma once
#include <string>
#include <map>

using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string& first_name); // �������� ���� ��������� ����� �� first_name � ��� year
    void ChangeLastName(int year, const string& last_name);   // �������� ���� ��������� ������� �� last_name � ��� year
    string GetFullName(int year); // �������� ��� � ������� �� ��������� �� ����� ���� year � ������� ��������� ������
private:
    map<int, string> first_name_changing;
    map<int, string> last_name_changing;
};