#include <iostream>
//#include <ostream>
//#include <istream>
#include<fstream>
#include <string>
#include<clocale>
//#include<wchar.h>

#include <io.h>
#include <string>
#include <sstream>
#include <clocale>



using namespace std;


int Count_WRD(string O,string B,int pos = 0)
{
    int t = B.length();
    int ps = O.find(B,pos);
    

    if(ps != string::npos)
    {

            if(ps+t >= O.length())
            {

                if(O.at( ps -1 ) == char(32))

                {return 1+Count_WRD(O,B,ps+1);}

                else
                
                {return Count_WRD(O,B,ps+1);}

            }
            else if(ps-1 < 0)
            {

                if(O.at( ps + t ) == char(32))

                {return 1+Count_WRD(O,B,ps+1);}

                else
                
                {return Count_WRD(O,B,ps+1);}

            }
            else
            {
                if(O.at( ps + t ) == char(32) && O.at( ps -1 ) == char(32))

                {return 1+Count_WRD(O,B,ps+1);}

                else
                
                {return Count_WRD(O,B,ps+1);}
            }
            
        
    }
    return 0;

}


void Filetxt()
{

    string Path,line,FND;
    char p[100];
    int rep;

    system("cls");

    cout<<"Porfavor indique la ruta del archivo: ";
    getline(cin,Path);
    cout<<"\n\nIndique la palabra a buscar: ";
    getline(cin,FND);
    cout<<"\nIndique cuantas lineas quiere leer (si quiere analizar el archivo completo coloque -1): ";
    cin>>rep;

    cin.ignore();

    ifstream Text;
    Path.length();

    Text.open(Path,ios::in);
    if(Text.fail())
    {

        cout<<"Me fallaste";
        
    }
    else
    {    
        int i = 0;

        while(!Text.eof() && (i < rep || rep == -1))

        {    
            getline(Text,line);
            
            printf("\nlinea: %-5d %3d Coincidencias\t",i+1,Count_WRD(line,FND));
            i++;
        }

    }
    cout<<"\n";
}