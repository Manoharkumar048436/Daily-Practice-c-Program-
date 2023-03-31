#include<string.h>
#include<stdio.h>

  struct person {
  char name[20];
  int age ;
   float height;
   
  }s;
int main ()
{
	scanf ("%s%d%f",s.name, &s.age, &s.height);
	printf("%s%d%f", s.name, s.age, s.height);
	 return 0 ;
}
