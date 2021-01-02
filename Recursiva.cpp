#include<iostream>
#include<stdio.h>
#include<string>
//#include"Utilities.cpp"

using namespace std;

string inv(string , int riju =0);




void Recursiva(void)
{

    string frs,frs_C;
    //gotoxy();
    cout<<"Porfavor ingrese la frase que va a ser analizada\n\n";
    getline(cin,frs);

    frs_C = inv(frs);
    frs = inv(frs_C);

    system("cls");

    if (frs.compare(frs_C) == 0 )
    {

        cout<<"usted amigo mio ha encontrado un palindromo";

    }
    else
    {
        cout<<"Este no es un palindromo";
    }

}



string inv(string Urbosa, int riju)
{

    string P, L;

    
    if (riju < Urbosa.length())
    {
        L = Urbosa.at(riju);

        if(Urbosa.at(riju) != char(32) )
        {

            return (inv(Urbosa,riju+1)).append(L);
        
        }
        else
        {
            return(inv(Urbosa,riju+1));
        }
        

    }
    return "";


}


