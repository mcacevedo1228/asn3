#include <stdio.h>
#include <stdlib.h>

int find_employee(int eid);
struct employee *init(char * first, char *last, int eid);


struct employee
{
	char *first_name;
	char *last_name;	// Max of 20 chars in first name, 30 in last name
	int eid;				// eid to be later occupied
};



int main()
{

	char *f = "Marc";
	char *l = "sdf";
	int id = 67;

	struct employee *emp = init(f, l, id);


	printf("F: %s\n", emp->first_name);
	printf("L: %s\n", emp->last_name);
	printf("ID: %d\n", emp->eid);	
	return -1;
}


struct employee *init(char * first, char *last, int eid) 
{

	struct employee *emp = malloc(sizeof(struct employee));
	emp->first_name = malloc(20*sizeof(char));
	emp->last_name = malloc(30*sizeof(char));

	emp->first_name = first;
	emp->last_name = last;
	emp->eid = eid;

 	return emp;
} 







