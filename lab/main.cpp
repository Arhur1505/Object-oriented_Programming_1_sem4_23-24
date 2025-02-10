// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
//
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Zaimplementuj odpowiednio klasy niezbedne do dzialania programu odtwarzajac hierarchie dziedziczenia, w tym dziedziczenia wielokrotnego i wirtualnego.
// Wszystkie rekonstruowane klasy musza tworzyc jedno drzewo dziedziczenia - kazda klasa musi dziedziczyc 
// z jakiejs innej przynajmniej jednej klasy za wyjatkiem klasy (klas) znajdujacej sie na samej górze hierarchii dziedziczenia.
// Nalezy wykonac dokladnie 3 rzutowania !
// Uwaga: nie należy powielać kodu z klasy bazowej w klasach pochodnych, tylko wykorzystać pracę wykonywaną przez metody klasy bazowej 
// w metodach klas pochodnych (także w odniesieniu do konstruktorów).
// Generalnie należy unikać duplikacji jakiegokolwiek kodu.
// Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).


#include <iostream>
#include <vector>

#include "X01.h"
#include "X02.h"
#include "X03.h"
#include "X04.h"
#include "X05.h"
#include "X06.h"
#include "Classifier.h"


int main() {

    std::vector<X03*> objects;
    
    objects.push_back(new X05());
    objects.push_back(new X02());
    objects.push_back(new X01());
    objects.push_back(new X04());
    objects.push_back(new X06());
    
	for (auto x: objects)
        std::cout << x->ObjectDescription() << std::endl;

    (new Classifier())->ChangeClassification(objects);

    for (auto x: objects)
        std::cout << x->ObjectDescription() << std::endl;

    return 0;
}


/** Wynik dzialania programu:
classification: unknown
classification: unknown
classification: unknown
classification: unknown
classification: unknown
classification: robot
classification: human
classification: robot
classification: human
classification: android
*/