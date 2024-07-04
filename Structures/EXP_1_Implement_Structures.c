#include <stdio.h>
struct Student
{
    char Name[50];
    int RollNo;
    float Percent;
};

int main()
{
    struct Student S1 = {"Nakul",179,95};
    struct Student S2;
    struct Student S3;
    printf("Enter Details For Student 2:\n");
    printf("Name:");
    scanf("%s",&S2.Name);
    printf("Roll No:");
    scanf("%d",&S2.RollNo);
    printf("Percentage:");
    scanf("%f",&S2.Percent);
    
    printf("\nEnter Details For Student 3:\n");
    printf("Name:");
    scanf("%s",&S3.Name);
    printf("Roll No:");
    scanf("%d",&S3.RollNo);
    printf("Percentage:");
    scanf("%f",&S3.Percent);
    
    printf("\nDetails Of Student 1:\n");
    printf("Student Name:%s\n Student RollNo:%d\n Student Percentage:%.2f\n",S1.Name,S1.RollNo,S1.Percent);
    printf("\nDetails Of Student 2:\n");
    printf("Student Name:%s\n Student RollNo:%d\n Student Percentage:%.2f\n",S2.Name,S2.RollNo,S2.Percent);
    printf("\nDetails Of Student 3:\n");
    printf("Student Name:%s\n Student RollNo:%d\n Student Percentage:%.2f\n",S3.Name,S3.RollNo,S3.Percent);
    return 0;
}