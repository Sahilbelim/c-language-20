 // name,age,email,number,weight,height
#include<stdio.h>
 struct stdbio
 {
     char name[24], email[30];
     int age;
     float weight, height, number;
 }student[5];
 void main()
 {
     int i;
     for (i = 0; i < 5;i++)
     {
         printf("Enter  student %d  detail  \n", i + 1);
         printf("Enter Name : ");
         scanf("%s", &student[i].name);
         printf("Enter Email : ");
         scanf("%s", &student[i].email);
         printf("Enter number : ");
         scanf("%f", &student[i].number);
         printf("Enter Age : ");
         scanf("%d", &student[i].age);
         printf("Enter weight : ");
         scanf("%f", &student[i].weight);
         printf("Enter height ");
         scanf("%f", &student[i].height);
   }
   for (i = 0; i < 5;i++)
   {

   printf("\n\n----------------------------------------------------\n\n");
   printf("student %d detail : \n\n",i+1);
   printf("Name : %s\n\n", student[i].name);
   printf("Age : %d\n\n", student[i].age);
   printf("Weight : %.2f \n\n", student[i].weight);
   printf("Height : %.2f\n\n", student[i].height);
   printf("Email : %s\n\n", student[i].email);
   printf("Number : %.0f\n\n", student[i].number);
   }
}