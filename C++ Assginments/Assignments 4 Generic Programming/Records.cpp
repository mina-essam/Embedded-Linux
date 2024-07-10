#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Record
{
    string  Name;
    int     Power_Level;
};




int main() {

    auto compareByName = [] (const Record& a, const Record& b) -> bool{
        return a.Name < b.Name;
    };
    auto compareByPowerLevel = [] (const Record& a, const Record& b) -> bool{
        return a.Power_Level < b.Power_Level;
    };
    vector<Record> records(4);
    records[0].Name = "Erin",
    records[0].Power_Level = 100;
    
    records[1].Name = "Armin",
    records[1].Power_Level = 80;
    
    records[2].Name = "Mikasa",
    records[2].Power_Level = 120;
    
    records[3].Name = "Reiner",
    records[3].Power_Level = 75;
    sort(records.begin(), records.end(), compareByName);
    cout<< "Arranged based on Name: \n";
    for(auto&record : records)
    {
        cout << record.Name << " " << record.Power_Level << endl;
    }
    cout<< "\nArranged based on Power Level: \n";
    sort(records.begin(), records.end(), compareByPowerLevel);

    for(auto&record : records)
    {
        cout << record.Name << " " << record.Power_Level << endl;
    }


    return EXIT_SUCCESS;
}