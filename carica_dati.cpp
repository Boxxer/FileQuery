/*  DataReader project - file carica_dati.cpp */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "carica_dati.h"

using namespace std;

void Caricadati::LoadFile(string **Tab, int *Rows)
{
     const long MaxCol = 16;
     int k;
     
     string Field, MyLine, MyColumn;
     ifstream MyFile("SAFMIS003_0902.TXT");
     if(!MyFile) 
     {
          cout<<"Errore, impossibile aprire il file TXT"<<endl;
          system("pause");
                
     }
     while(!MyFile.eof())
     {
          k=0;               
          getline(MyFile, MyLine, '\n');
          Tab[*Rows] = new string[MaxCol];
          
          //cout <<"MyLine: "<< MyLine << endl;
          Tab[*Rows][k] = MyLine;
          
          istringstream MyColumn(MyLine);
          while(!MyColumn.eof())
          {
               getline(MyColumn, Field, ';');
               Tab[*Rows][k] = Field;    
               k++;
          }
          *Rows = *Rows + 1;
          
     }
     
     cout << "Tab[i][k]"<<endl;
     cout <<"Rows: "<<*Rows <<" - "<<"k: "<<k<< endl;
     //cout << Tab[1][0]<<" "<<Tab[1][1]<<" "<<Tab[1][5]<<" "<<Tab[1][6]<<" "<<Tab[1][7]<<endl;
     
}
