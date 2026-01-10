#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    Studente Mario;
    Studente Maria;
    Studente *p;
    p=&Maria;
    p->eta=18;
    p->media=8;
    p->nome="Maria";
    Mario.nome="Mario";
    Mario.eta=17;
    Mario.media=7;
cout<<"Dati di Mario"<<endl;
Mario.stampaStudente();
cout<<"Dati di Maria"<<endl;
p->stampaStudente();
    return 0;
}
