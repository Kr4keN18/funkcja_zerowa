#include <iostream>

using namespace std;

void miejsca_zerowe(float a, float b)

{
	float wartosc;
	
	cout<<"Twoja funkcja ma wartosc"<<a<<"x+a ("<<b<<") = 0"<<endl;
	if(a==0 && b!=0)
	{
		cout<<"Nie mozna utworzyc funkcji liniowej"<<endl;
	}
	
	if(a==0 && b==0)
	{
		cout<<"Funkcja ma nieskonczenie wiele miejsc zerowych"<<endl;
		
		else
		{
			wartosc = -b/a;
			cout<<"Miejsce zerowe funkcji to: "<<wartosc<<endl;
		}
	}
	
	cout<<"Podaj liczbe a: "<<endl;
	cin>>a;
	cout<<"Podaj liczbe b: "<<endl;
	cin>>b;
	
	
}
