ConsoleApplication1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int die(void)
{
	bool score;
	int a, faces;
	faces = 6;
	a = rand() % faces + 1;
	return a;
}
/*int rolldice() {
int die[6];
for(int i = 0; i < 6; i++)
{
die[i] = rand() % 6 + 1;
}
}*/

int main()
{



	srand(time(NULL));
	//cout << rolldice();

	int throws;
	cout << "wie viele würfel werfen ? :";
	cin >> throws;

	while (throws > 0) {
		int die1 = die();
		cout << die1 << " | ";
		throws--;
	}
	cout << "\n";
	system("PAUSE");
	return 0;

}

