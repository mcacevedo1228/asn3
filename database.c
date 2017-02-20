#include <stdio.h>
#include <stdlib.h>

int find_employee(int eid);

struct employee 
{
	char first_name[20], last_name[30];	// Max of 20 chars in first name, 30 in last name
	int eid;				// eid to be later occupied
}



int main()
{
	int eid = 45;
	find_employee(eid);
	return -1;
}

int find_employee(int eid)
{
	if (eid == 45)		 		// Test -- print number and then return 1
	{
		printf("The employee ID is: %d\n", eid);
		return 1;
	}
	return -1;
}







