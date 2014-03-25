/* DataReader Project - file main.cpp */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "estrai_dati.h"
#include "carica_dati.h"

using namespace std;

/****** MAIN **********************/
int main()
{
    const long MaxRow = 350000;
        
    string **Tabella = new string*[MaxRow];
        
    int i, k, ind0;
    i = k = 0; 
    
    //dichiarazione puntatori
    int *Rows = &i;
    string chiave_ricerca;
    string *chiave = &chiave_ricerca;
    int parametro;
    int *Prm = &parametro;
    
    
    //creazione oggetto CARICA
    Caricadati *CARICA = new Caricadati();
    CARICA->LoadFile(Tabella, &i);
    
    
    /*for (ind0=0; ind0<*Rows; ind0++)
    {
        cout << Tabella[ind0][0]<<" "<<Tabella[ind0][1]<<" "<<Tabella[ind0][5]<<" "<<Tabella[ind0][6]<<" "<<Tabella[ind0][7]<<endl;
    }
    
    
    /*** OPZIONE DI RICERCA ***/
    cout <<"Ricerca per[1:Tran - 2:UserId - 3:Servizio]: ";
    cin >> parametro;
    
    
    /*** RICERCA ***/    
    cout << "inserisci chiave di ricerca: ";
    cin >> chiave_ricerca;
    
    Estraidati *Extract = new Estraidati();
    Extract->Ricerca(&chiave_ricerca, Tabella, &i, 16, &parametro);
    
    delete Extract;
    
    delete CARICA;
    
    
    
    
    
    
    
    
    system("pause");
}
