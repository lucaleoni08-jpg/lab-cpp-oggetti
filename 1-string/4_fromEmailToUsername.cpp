#include <iostream>
#include <string>
#include <cctype>   // per toupper
using namespace std;

const int N = 12;

string emails[N] = {
    "marco.rossi@studio.alberghetti.it",
    "anna.bianchi@studio.alberghetti.it",
    "luca.verdi@studio.alberghetti.it",
    "giulia.moretti@studio.alberghetti.it",
    "alessandro.ferrari@studio.alberghetti.it",
    "chiara.galli@studio.alberghetti.it",
    "matteo.martinelli@studio.alberghetti.it",
    "sara.ricci@studio.alberghetti.it",
    "stefano.colombo@studio.alberghetti.it",
    "elena.sartori@studio.alberghetti.it",
    "gianluca.marini@studio.alberghetti.it",
    "marta.leone@studio.alberghetti.it"
};

string minuscolo(string s){
    for(int i = 0; i < s.length(); i++)
        s.at(i) = tolower(s.at(i));
    return s;
}

string primoCarattereMaiuscolo(string &s) {
    if (s.length() > 0)
        s[0] = toupper(s[0]);
    return s;
}

void toglidopoChiocciola(string email[], int N)
{
    for (int i = 0; i < N; i++){
        int x = emails[i].find("@");
        int m = emails[i].size();

        emails[i].erase(x, m);

        int h = emails[i].find(".");
        string s = emails[i].substr(h);
        emails[i].erase(h);

        emails[i].insert(h, " " + s.substr(1));
    }
}

int main() {

    string nomiCognomi[N];


    toglidopoChiocciola(emails, N);

    for (int i = 0; i < N; i++) {

        string email = emails[i];

        int posSpazio = email.find(" ");

        string nome = email.substr(0, posSpazio);
        string cognome = email.substr(posSpazio + 1);

        primoCarattereMaiuscolo(nome);
        primoCarattereMaiuscolo(cognome);

        nomiCognomi[i] = nome + " " + cognome;
    }

    cout << "Risultato:\n";
    for (int i = 0; i < N; i++) {
        cout << nomiCognomi[i] << endl;
    }

    return 0;
}
