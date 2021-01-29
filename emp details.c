#include <stdio.h>
 
//structure declaration
struct employee{
    char    name[20];
    int     empId;
    float   salary;
    char    dept
};
 
int main()
{
    
    struct employee emp;
     
    
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
    printf("department name:"); gets(emp.dept);
     
   
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
