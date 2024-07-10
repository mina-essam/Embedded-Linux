#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> WeekDays = 
{
    {"Monday", 1}, {"Tuesday", 2}, {"Wednesday", 3}, {"Thursday",4},
    {"Friday", 5}, {"Saturday", 6}, {"Sunday", 7}
};
constexpr int NumberOfDays = 7;

string ConvertValuetoDay(map<string, int> week, int value) {
    for (auto it = week.begin(); it!= week.end(); it++) {
        if (it->second == value) {
            return it->first;
        }
    }
    return "";
}
int main() {


    string currentDay;
    cout<< "Enter current day:  ";
    cin >> currentDay;
    int currentDayValue = WeekDays[currentDay];
    int value;
    cout<< "Enter days:  ";
    cin >> value;

    int index = (currentDayValue + value) % NumberOfDays;
    if (index ==0)
        index = 1;

    cout<< "Day: " << ConvertValuetoDay(WeekDays, index) << endl;

    return 0;
}