// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
//
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Uwaga !: w ponizszym zadaniu klasy Event1 i Event2 musza dziedziczyc z klasy Event,
// ktora nie moze posiadac zadnego pola ani metody poza pustym destruktorem.
// Mechanizm selekcji komunikatow nalezy zaimplementowac za pomoca dynamic_cast.
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
// * archiwum powinno zawierać katalog z zadaniem labNN/ (gdzie NN to nr laboratorum np. lab01)
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


#include "Subject.h"
#include "Observer.h"
#include "Event.h"
#include "Event1.h"
#include "Event2.h"
#include "MySubject.h"
#include "MyObserver1.h"
#include "MyObserver2.h"



int main()
{
	MyObserver1 s1(1);
	s1.print();
	MyObserver2 s2(2);
	s2.print();

    MySubject m; 
	m.attach(s1); 
	m.attach(s2);
	
	MyObserver1 s3(3);
	m.attach(s3); 
	MyObserver2 s4(4);
	m.attach(s4); 
	
	m.printObservers();
	cout << endl;

    Event1 e1(5, "Message"); 
	m.notifyEvent(e1);
    
	Event2 e2(0.11); 
	m.notifyEvent(e2);
    
    
    return 0;
}


/** Wynik dzialania programu:
Obserwator 1
Obserwator 2
Zarejestrowani obserwatorzy:
Obserwator 1
Obserwator 2
Obserwator 3
Obserwator 4

Obserwator 1 - otrzymany komunikat: <5, Message>
Obserwator 3 - otrzymany komunikat: <5, Message>
Obserwator 1 - otrzymany komunikat: <0.11>
Obserwator 2 - otrzymany komunikat: <0.11>
Obserwator 3 - otrzymany komunikat: <0.11>
Obserwator 4 - otrzymany komunikat: <0.11>
*/