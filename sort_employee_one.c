#include <stdio.h>

struct Employee
{
	char name[50];
	unsigned long int salary;
	unsigned int age;
};

void sort_employee(struct Employee employee_col[], int array_len)
{
	for (int i = 1; i < array_len; i++)
	{
		for (int j = 1; j < (array_len - i); j++){
			if ((employee_col[j].salary) > (employee_col[j+1].salary)){
				struct Employee temp = employee_col[j];
				employee_col[j] = employee_col[j+1];
				employee_col[j+1] = temp;
			};
		};
	}

	for (int i = 0; i < array_len; i++)
	{
		printf("%d. %s \n", i, employee_col[i].name);
	};
	
	
	return;
}

int main()
{

	// employees
	struct Employee employee_one = {"Shanu", 2200000, 15};
	struct Employee employee_two = {"Siddhant", 2500000, 16};
	struct Employee employee_three = {"Somnath", 7800000, 23};
	struct Employee employee_four = {"Ritwik", 4600000, 22};

	// employees in an array to get them sorted
	struct Employee employee_collection[4] = {employee_one, employee_two, employee_three, employee_four};

	int array_len = sizeof(employee_collection) / sizeof(struct Employee);

	sort_employee(employee_collection, array_len);
	return 0;
}
