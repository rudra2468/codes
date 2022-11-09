#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();

 char s1[]="we can win do this",
      s2[]="sahi bhi hai";

      printf("%d\n",strlen(s1));
      printf("%d\n",strlen(s2));
      printf("%d\n",strcmp(s1,s2));
      printf("%s\n",s1+5);
      strcpy(s1+5,s2+3);
      printf("%s\n",s1);
      strcat(s1,"s!");

      getch();


}