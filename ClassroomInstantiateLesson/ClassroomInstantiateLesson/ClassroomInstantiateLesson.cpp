#include <iostream>
#include "Person.h"
#include <stdlib.h>


int main()
{
    Person Mik;
    Person Hugo;
	Person Dean;

	Mik.Name("Mik");
	Mik.Height("188 cm");
	Mik.Age("18");
	Mik.Hobby("Gaming");
	Mik.Study("Software Development");

	Hugo.Name("Hugo");
	Hugo.Height("175 cm");
	Hugo.Age("17");
	Hugo.Hobby("Gaming");
	Hugo.Study("Software Development");

	Dean.Name("Dean");
	Dean.Height("189 cm");
	Dean.Age("18");
	Dean.Hobby("Gaming");
	Dean.Study("Software Developer");

	Mik.DisplayInfo();

	system("PAUSE");
	system("CLS");

	Hugo.DisplayInfo();

	system("PAUSE");
	system("CLS");

	Dean.DisplayInfo();
	return 0;
}

