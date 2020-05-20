#include <iostream>
#include <string>
using namespace std;

struct uczen
{
	public:
	string imie;
	string nazwisko;
	float wiek;
	uczen(string im,string nazw ,float wie)
	{
		imie =im;
		nazwisko= nazw;
		wiek=wie;
		
	}
};
void wypisz(struct uczen ucz)
	{
	cout<< ucz.imie<<endl;
	cout<< ucz.nazwisko<<endl;
	cout<< ucz.wiek<<endl;
	}

int main(int argc, char** argv) 
{
	uczen p1("Krystian","Kempa",17);
	wypisz(p1);
	
	uczen p2("Amadeusz","Skretkowicz",17);
	wypisz (p2);
	
	uczen p3("Igor","Puszman",16);
	wypisz (p3);
	
	return 0;
}
