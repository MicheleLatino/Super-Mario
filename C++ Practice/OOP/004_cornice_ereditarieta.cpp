/******************************************************************
                      Liceo Scienfitifo G.Galilei
                      Indirizzo Scienze Applicate
                          Corso di Informatica
                       Anno Scolastico 2017/2018


Descrizione del Programma:
   Ereditariet�

Autore: prof. Michele Salvemini
*******************************************************************/
#include <iostream>
using namespace std;

//PROTOTIPO CLASSE
class Rettangolo{
    //attributi
    float base;
    float altezza;

public:
    Rettangolo();
    Rettangolo(float pbase,float paltezza);
    float getBase();
    void setBase(float pbase);
    float getAltezza();
    void setAltezza(float paltezza);
    float calcolaArea();
    ~Rettangolo();
};

class Cornice: public Rettangolo{
    int colore;

public:
    Cornice();
    void setColore(int pcolore);
    int getColore();
    ~Cornice();
};


//IMPLEMENTAZIONE CLASSE
Rettangolo::Rettangolo(){
    cout<<"inizio!!"<<endl;
    base=0;
    altezza=0;
}

Rettangolo::Rettangolo(float pbase,float paltezza){
    cout<<"inizio!!"<<endl;
    base=pbase;
    altezza=paltezza;
}

float Rettangolo::getBase(){
        return base;
    }

void Rettangolo::setBase(float pbase){
        base=pbase;
    }
float Rettangolo::getAltezza(){
    return altezza;
}
void Rettangolo::setAltezza(float paltezza){
    altezza=paltezza;
}
float Rettangolo::calcolaArea(){
    float risultato = base*altezza;
    return risultato;
}

Rettangolo::~Rettangolo(){
    cout<<"Ciao!!"<<endl;
}

void Cornice::setColore(int pcolore){
    colore=pcolore;
}
int Cornice::getColore(){
    return colore;
}
Cornice::Cornice(){
    cout<<"inizio Cornice!!"<<endl;
    colore=0;
}
Cornice::~Cornice(){
    cout<<"FINE Cornice!!"<<endl;
}
int main(){
    Rettangolo r,s,k(55,33);
    r.setBase(8);
    r.setAltezza(5);
    cout<<r.getBase()<<endl;
    s.setBase(18);
    s.setAltezza(15);
    cout<<r.calcolaArea()<<endl;
    cout<<s.calcolaArea()<<endl;
    cout<<k.getBase()<<endl;
    cout<<k.getAltezza()<<endl;
    Cornice x;
    cout<<x.getBase()<<endl;
    cout<<x.getAltezza()<<endl;
    cout<<x.getColore()<<endl;
}