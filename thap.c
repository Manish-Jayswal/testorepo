#include<stdio.h>
#include<stdlib.h>
int main()
{
 struct student
 {
     char name[20];
     char add[20];
     char phone[12];
     int age;
     float marks;
 };
FILE *fp;
 struct student st[2];
 int i;
/* for(i=0;i<=1;i++)
 {
   printf("\nEnter details of student%d:",i+1);
 fflush(stdin);
 printf("\nEnter name: ");
 gets(st[i].name);
 printf("\nEnter address : ");
 gets(st[i].add);
fflush(stdin);
 printf("\nEnter phone : ");
 scanf("%s",st[i].phone);
fflush(stdin);
 printf("\nEnter age: ");
 scanf("%d",&st[i].age);
 fflush(stdin);
 printf("\nEnter marks: ");
 scanf("%f",&st[i].marks);
 }
 */
 printf("\nTHe data from file are:");
 fp =fopen("C:\\pul2564665.txt","rb");
 if(fp==NULL)
 {
     printf("\nFile can not be opened!!");
     exit(1);
 }
 fread(st,sizeof(st[0]),2,fp);

 for(i=0;i<=1;i++)
 {

 printf("\nName : %s \nAdd : %s \nPhone : %s \nAge : %d \nMarks : %f",st[i].name,st[i].add,st[i].phone,st[i].age,st[i].marks);
 }
 fclose(fp);
return 0;
}
