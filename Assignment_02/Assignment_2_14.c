//Write a program to accept Employee Id, Department No, Designation from user and display output with reference to following tables



#include<stdio.h>

int main()

{

	int emp_id, dept_no;
	char dsgn_code;

	printf("Enter the Employee ID : ");
	scanf("%d",&emp_id);

	printf("Enter the Department Number : ");
	scanf("%d",&dept_no);

	printf("Enter the Designation Code : ");
	scanf("%*c%c",&dsgn_code);

	switch(dept_no)

	{

		case 10:
				printf("Employee with EMP id : %d working in Marketing Department \n",emp_id);
				break;

		case 20:
				printf("Employee with EMP id : %d working in Management Department \n",emp_id);
				break;

		case 30:
				printf("Employee with EMP id : %d working in Sales Department \n", emp_id);
				break;

		case 40:
				printf("Employee with EMP id : %d working in Designing Department \n", emp_id);
				break;

		default :
				printf("Invalid input!\n");
				break;

	}

	switch(dsgn_code)

	{

		case 'M' :
				 printf("as a Manager \n");
				 break;

		case 'S' :
				 printf("as a Supervisor \n");
				 break;

		case 's' :
				 printf("as a Security Officer \n");
				 break;

		case 'C' :
				 printf("as a Clerk \n");
				 break;

		default :
				printf("Invalid input!\n");
				break;

	}

	return 0;

}
