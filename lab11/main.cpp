// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
//
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
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog labNN/ z katalogami z podzadaniami labNNa itd. (gdzie NN to nr laboratorum np. lab01)
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane - przykład prawidłowej dokumentacji funkcji:
//
// /** @brief Wyszukanie elementu w liscie.
// *
// * Funkcja przeszukuje liste w celu znalezienia podanego elementu.
// *
// * @param[in] list  wskaznik do listy
// * @param[in] c  wartosc szukanego elementu
// * @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
// * NULL jesli lista nie posiada elementu o wartosci c
// */
// slistEl* find(slist* list, char c);



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

	
	InputString = "eeeeeuwwwwwwwwwwwwwwxxxxxxxxxxxxxxxxxxxxxxxxxx";
	Component* c1 = new Encryptor( new Compressor ( new Writer() ));
	c1->Process(InputString);
	delete c1;
	
	cout << endl;
	
	InputString = "ssssssssssssseeetcccccccccccccccccccccccccccc";
	Component* c2 = new Compressor( new Encryptor ( new Writer() ));
	c2->Process(InputString);
	delete c2;

	cout << endl;
	
	InputString = "ewddddddddddddddddddddddddqqqqqqqqqqqqqqqqqqyyyyy";
	Component* c3 = new Writer( new Compressor( new Writer( new Encryptor ( new Writer() ))));
	c3->Process(InputString);
	delete c3;
	


    return 0;
}


/** Wynik dzialania programu:
aaabbbbbcccc
bbbcccccdddd
3a5b4c

5f1v14x26y

24t4f2u39d

ewddddddddddddddddddddddddqqqqqqqqqqqqqqqqqqyyyyy
1e1w24d18q5y
2f2x35e29r6z
*/
