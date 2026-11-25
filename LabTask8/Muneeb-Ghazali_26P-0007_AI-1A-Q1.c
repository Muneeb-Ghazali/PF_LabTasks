#include<stdio.h>

int main ()
{
	int age;
	float cgpa;
	char grade;
	
	int *pAge=&age;
	float *pCgpa=&cgpa;
	char *pGrade=&grade;
	
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter CGPA: ");
	scanf("%f",&cgpa);
	printf("Enter grade: ");
	scanf(" %c",&grade);
	
	printf("age = %d \t via pointer = %d \t &age = %p \t pAge = %p\n",age,*pAge,&age,pAge);
	printf("cgpa = %.2f\t via pointer = %.2f \t &cgpa = %p \t pCgpa = %p\n",cgpa,*pCgpa,&cgpa,pCgpa);
	printf("grade = %c\t via pointer = %c \t &grade = %p \t pGrade = %p\n",grade,*pGrade,&grade,pGrade);
	printf("&pAge = %p\t &pCgpa = %p\t &pGrade = %p\n",&pAge,&pCgpa,&pGrade);
	
	*pAge+=1;
	*pCgpa+=0.25;
	*pGrade+=1;
	printf("After changing through pointers:\nAge = %d, cgpa = %.2f, grade = %c",age,cgpa,grade);
	
	return 0;
}
