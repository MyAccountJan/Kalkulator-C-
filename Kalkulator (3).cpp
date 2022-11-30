#include <iostream>
#include<windows.h>
using namespace std;

// Kalkulator C++ by: Jan Grygiel II TP

int main() {
    
    // Kod Nie Zawiera Bledow
    // Zostal‚ Pomyslnie Przetestowany
    // Wszystko W Kodzie Zostalo Zawarte i Ulepszone
    // Zycze Milego Testowania! :)
    
    int dzialanie, pierwsza_liczba, druga_liczba, wynik;
    
    // Opcje
    cout << "\n~ Wybierz Operacje:\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie\n 5. Zakoncz" << endl; // \n Przed Ca³oscia Dla Estetyki
    cout << ">> ";
    cin >> dzialanie;
    cout << "\n";
    
    // Sprawdzanie Mozliwosci Operacji
    while (dzialanie < 1 or dzialanie > 5) {
    	system("cls");
        cout << "\n~ Wybierz (((POPRAWNA))) Operacje:\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie\n 5. Zakoncz" << endl;
        cout << ">> ";
        cin >> dzialanie;
    }
    
    // Dzialania Na Programie
    while (dzialanie >= 1 and dzialanie <= 4) {
        system("cls");
        // Switch Case
        switch (dzialanie) {
            case 1:
                cout << "Dodawanie! ( + )" << endl;
                cout << "- Podaj Pierwsza Liczbe - Skladnik >> ";
                cin >> pierwsza_liczba;
                cout << "- Podaj Druga Liczbe - Skladnik >> ";
                cin >> druga_liczba;
                
                wynik = pierwsza_liczba + druga_liczba;
                cout << "Suma Dzialania " << pierwsza_liczba << " + " << druga_liczba << " = " << wynik << endl;
                cout << "\n";
                
                system("pause");
                break;
                
            case 2:
                cout << "Odejmowanie! ( - )" << endl;
                cout << "- Podaj Pierwsza Liczbe - Odjemna >> ";
                cin >> pierwsza_liczba;
                cout << "- Podaj Druga Liczbe - Odjemnik >> ";
                cin >> druga_liczba;
                
                wynik = pierwsza_liczba - druga_liczba;
                cout << "Roznica Dzialania " << pierwsza_liczba << " - " << druga_liczba << " = " << wynik << endl;
                cout << "\n";
                
                system("pause");
                break;
                
            case 3:
                cout << "Mnozenie! ( * )" << endl;
                cout << "- Podaj Pierwsza Liczbe - Czynnik >> ";
                cin >> pierwsza_liczba;
                cout << "- Podaj Druga Liczbe - Czynnik >> ";
                cin >> druga_liczba;
                
                wynik = pierwsza_liczba * druga_liczba;
                cout << "Iloczyn Dzialania " << pierwsza_liczba << " * " << druga_liczba << " = " << wynik << endl;
                cout << "\n";
                
                system("pause");
                break;
            
            case 4:
                cout << "Dzielenie! ( / )" << endl;
                cout << "- Podaj Pierwsza Liczbe - Dzielnik >> ";
                cin >> pierwsza_liczba;
                cout << "- Podaj Druga Liczbe - Dzielna >> ";
                cin >> druga_liczba;
                
                if (druga_liczba == 0) {
                	cout<<"NIE DZIEL PRZEZ 0 !!!"<<endl;
				} else {
                
                wynik = pierwsza_liczba / druga_liczba;
                cout << "Iloraz Dzialania " << pierwsza_liczba << " / " << druga_liczba << " = " << wynik << endl;
                cout << "\n";
                
            	}
                
                system("pause");
                break;
        }
        
        // Powtorzenie Operacji (Dla Petli)
        system("cls");
        cout << "\n~ Wybierz Operacje:\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie\n 5. Zakoncz" << endl;
        cout << ">> ";
        cin >> dzialanie;
        cout << "\n";
        
        while (dzialanie < 1 or dzialanie > 5) {
        	system("cls");
        	cout << "\n~ Wybierz (((POPRAWNA))) Operacje:\n 1. Dodawanie\n 2. Odejmowanie\n 3. Mnozenie\n 4. Dzielenie\n 5. Zakoncz" << endl;
        	cout << ">> ";
            cin >> dzialanie;
        }
    }
    
    system("cls");
    cout << "\nZakonczono Wszelkie Operacje!" << endl; // ENDL Dla Estetyki :)
    return 0;
}
