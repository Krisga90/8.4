#include <iostream>
using namespace std;
#include <cstring>		//dla strlen() i strcpy()
struct stringy
{
	char * str;			//wskazuje adres lancucha
	int ct;				//wskazuje dlugosc lancucha bez'\0'
};
void Set(stringy & a, const char b[]);
void Show(const stringy & a, int times = 1);
void Show(const char a[], int times = 1);

//prototypy set(), show() i show()
int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys";

	Set(beany, testing);

	Show(beany);
	Show(beany, 2);
	testing[0]='D';
	testing[1] = 'u';
	Show(testing);
	Show(testing, 3);
	Show("Gotowe");
	cin.get();
	return 0;
	
}

void Set(stringy & a, const char b[])
{
	a.ct = strlen(b) + 1;
	a.str = new char[a.ct];
	strcpy_s(a.str, a.ct,b);
}
void Show(const stringy & a, int times )
{
	for (int i = 1; i < times; i++)
		cout <<i+1<<":\t"<< a.str << endl;
	cout <<i+1<<":\t"<< a.str << endl;
}
void Show(const char a[], int times )
{
	for (int i = 1; i < times; i++)
		cout <<i+1<<":\t"<< a << endl;
	cout <<i+1<<":\t"<< a.str << endl;
}