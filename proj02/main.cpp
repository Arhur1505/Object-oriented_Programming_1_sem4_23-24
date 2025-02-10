// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Uwaga: nie należy powielać kodu z klasy bazowej w klasach pochodnych, tylko wykorzystać pracę wykonywaną przez metody klasy bazowej 
// w metodach klas pochodnych (także w odniesieniu do konstruktorów).
// Generalnie należy unikać duplikacji jakiegokolwiek kodu.
// Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
//
// Pliku main.cpp, nie wolno modyfikowac.

#include <iostream>

using namespace std;


#include "Component.h"
#include "Writer.h"
#include "Encryptor.h"
#include "Compressor.h"

int main() 
{
	string InputString;
	
	InputString = "aaabbbbbcccc";
	Component* w = new Writer();
	w->Process(InputString);
	delete w;

	InputString = "aaabbbbbcccc";
	Component* e = new Encryptor();
	e->Process(InputString);
	cout << InputString << endl;
	delete e;
	
	InputString = "aaabbbbbcccc";
	Component* c = new Compressor();
	c->Process(InputString);
	cout << InputString << endl;
	delete c;
	
	cout << endl;


    return 0;
}


/** Wynik dzialania programu:
aaabbbbbcccc
bbbcccccdddd
3a5b4c

*/
