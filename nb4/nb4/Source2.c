#include <stdio.h>

int main()
{ 
	struct book
	{
		char name[20];
		float price;
		char id[30];
	};
	struct book s = {"aba",2.5,"eihei"};
	printf("%s %lf %s", s.name, s.price, s.id);
	return 0;

}