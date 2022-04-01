#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    char lastInitial;
    int age;
    bool isAdult;
    int zipCode;
    float wage;
    int daysWorked;
    int hoursWorkedPerDay[7];
    const float TAX = 0.1f;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your last name initial: ";
    cin >> lastInitial;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        isAdult = 1;
    }
    else {
        isAdult = 0;
    }
    cout << "Enter your Zipcode: ";
    cin >> zipCode;
    cout << "Enter wage: ";
    cin >> wage;
    cout << "Enter days worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked for day "<< i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
    }
    
    int totalHours = 0;
    for (int i = 0; i < daysWorked; i++) {
        totalHours = totalHours + hoursWorkedPerDay[i];
    }

    float grossIncome;
    float netIncome;

    grossIncome = totalHours * wage;
    netIncome = grossIncome - (grossIncome * TAX);
    
    cout << endl;
    cout << name << " worked " << totalHours << " hours at $" << wage << " an hour\n";
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;

    //unsigned int i = -34;
    ////unsigned makes it not negative
    //float f = 23;
    //bool b = 5;
    //string name;

    //int ages[4];

    //const float TAX = 0.085;
    ////const is constant and cannot change

    //cin >> name;
    //cout << name;

    //if (b) cout << "true\n";
    //cout << sandoval::i << std::endl;
    //cout << "Hello Data!\n";
}
