/*Calculate Your Age Application*/

#include <iostream>
using namespace std;

int main()
{
  cout << "====================================\n";
  cout << "== Calculate Your Age Application ==\n";
  cout << "====================================\n";

  cout << "enter your age in next line: \n";

  int age;
  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;
  int age_in_minutes = age_in_hours * 60;
  int age_in_seconds = age_in_minutes * 60;

  cout << "Age In Days Is: " << age_in_days << " Days\n";
  cout << "Age In Hours Is: " << age_in_hours << " Hours\n";
  cout << "Age In minutes Is: " << age_in_minutes << " Minutes\n";
  cout << "Age In Seconds Is: " << age_in_seconds << " Seconds\n";

  return 0;
}