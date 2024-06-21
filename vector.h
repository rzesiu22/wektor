#ifndef VECTOR_H
#define VECTOR_H
//konstruktory sluza do inicjalizacji obiektow
class Vector {
private:
    double x,y;
public:
    Vector(); //konstruktor domyslny
    Vector(double x , double y );// konstruktor z parametrami

//gettery( metody dostepu, ktore pozwalaja na odczytywanie
// z prywatnych pol obiektu z zewnatrz klasy)
// oraz mozemy uzyskac wyniki wektorow i je wyswietlic

    double getX() const;
    double getY() const;
  //metoda obliczania dlugosci
    double length() const;

    //operatory ( pozwalaja na dodawanie/odejmowanie/mnozenie obiektow klasy
    // to specjalne symbole lub sekwencje symboli, które definiują operacje na danych
    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(double scalar) const;


};

#endif // VECTOR_H