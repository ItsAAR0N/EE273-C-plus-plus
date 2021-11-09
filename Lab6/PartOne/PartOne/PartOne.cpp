#include <iostream>
#include "C:/Users/aaron/Desktop/PartOne/PartOne/ComplexStructureHeader.h"
// Drag to desktop to get it working

using namespace std;

int main()
{   
    Complex numbers; // New running variable to access complex structure
    cout << "Please enter number: " << endl;
    cin >> numbers.realOne;
    cout << "Please enter another number:" << endl;
    cin >> numbers.imagOne;
    cout << "Number One is: " << numbers.realOne << "\n" << "Number Two is: " << numbers.imagOne;
}

/*

#include <iostream>
#include <string>

#define NVILLIANS 5

using namespace std;

struct mailinglistRecord
{
    string givenName;
    string familyName;
    string postcode;
};

int main()
{
    mailinglistRecord villians[NVILLIANS];
    int n;

    for (n = 0; n < NVILLIANS; n++) {
        cout << "Enter the family name of a villian. \n";
        cin >> villians[n].familyName;

    }
}
*/