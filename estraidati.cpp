/* DataReader project - file estradati.cpp */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "estrai_dati.h"

using namespace std;

void Estraidati::Ricerca(string *chiave, string **Vett, int *rows, int cols, int *Prm)
       {
            
            //c = *chiave;
            //Estraidati::V = **Vett;
            C = cols;
            int ii; 
                      
            string spazio = " ";
            
            const int MaxRes = 1000;
            string *Vet_Risultato = new string[MaxRes];
    
            cout << "MaxRow (y): "<<*rows<<endl;
            for (ii=0; ii<*rows; ii++)
            {
                if (Vett[ii][7] == *chiave)
                {
                   Vet_Risultato[z] = Vett[ii][0]+spazio+Vett[ii][1]+spazio+Vett[ii][2]+spazio+Vett[ii][5]+spazio+Vett[ii][6]+spazio+Vett[ii][7]; 
                   cout <<Vet_Risultato[z]<<endl;; 
                   z++;  
                }
        
            }
            cout << "estrazioni eseguite: "<<z<<endl;   
            cout << "allocati " << MaxRes*sizeof(string) << " byte" << endl;
    
            delete [] Vet_Risultato;
            cout << "deallocati " << MaxRes*sizeof(string) << " byte" << endl;     
            
       }
