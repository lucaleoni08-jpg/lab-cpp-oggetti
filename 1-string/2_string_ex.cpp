#include <iostream>
#include <string>

using namespace std;

/*
    size() e length()
    TODO: stampa la lunghezza della string passata in input
*/
void lunghezzaStringa(string stringa){

    int x=stringa.size();
    cout<<"La lunghezza della stringa e':"<<x<<endl;

}

/*
    find()
    TODO: immettere una stringa da tastiera e comunicare all'utente se è presente la parola "ciao"
            se la parola è presente, stampare "La parola ciao è presente"
            altrimenti stampare "La parola ciao NON è presente"
*/
void trovaCiao(string stringa){
int z = stringa.find("ciao");
if(z==(-1)){
    cout<<"La parola ciao non è presente"<<endl;
}
else{

     cout<<"La parola ciao è presente all'indice "<<z<<endl;
}

}


/*
    replace()
    TODO: sostituire la parola "pizza" con la parola "pasta" e stampare la nuova stringa
*/
void sostituisciPizzaConPasta(string stringa){
int x=stringa.size();
    cout<<"La lunghezza della stringa e':"<<x<<endl;

    int z = stringa.find("pizza");
    if(z==(-1)){
    cout<<"La parola pizza non è presente all'interno della stringa"<<endl;
    }
    else{
     cout << "Stringa prima del replace: " << stringa << endl;
        stringa.replace(z, 5, "pasta");
    cout << "Stringa dopo replace: " << stringa << endl;
    cout<< endl;

    }



}


/*
    substr()
    TODO: estrarre e stampare la prima parola della stringa passata in input

    HINT: la prima parola termina al primo spazio (trovabile con find())
*/
void stampaPrimaParola(string stringa){
int z = stringa.find(" ");
stringa = stringa.substr(0, z);
    cout << "La prima parola e' : " << stringa << endl;
    cout << endl;
}


/*
    insert()
    TODO: inserire alla fine della stringa passata in input " Giovanni!" e stampare la nuova stringa
*/
void aggiungiGiovanni(string frase){

int x=frase.size();

 frase.insert(x, " Giovanni");
    cout << "Stringa dopo insert: " << frase << endl;
    cout<< endl;
}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
