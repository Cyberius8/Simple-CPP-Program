#include <ctime>
#include <iostream>
#include <windows.h>

int main ()
{
	using std :: cin;
	bool loop = true;
	
	while (loop)
	{
		std :: time_t now = std :: time (0);
		std :: tm*local = std :: localtime (&now);
		
		local -> tm_hour -= 12;
		
		system ("cls");
		std :: cout << ctime (&now) << '/n';
		Sleep(1000);
 		}
 		cin.get();
 		
 		return 0;
}
