#ifndef HeaderPerson_H
#include <string>
#include <fstream>

#define NO_OF_PERSONS 10
#define LINE "--------------------------------------"

using namespace std;

typedef struct Person;
struct Person // Structure contains data "Name", and pointer to next within
{
	struct Person* next; // "Next" Pointer to a structure Person
	string Name;

};

void walkList(struct Person* head)
{
	for (struct Person* p = head; p != NULL; p = p->next) {
		cout << p->Name << endl;
	}
}

#endif 
