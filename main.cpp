#include<iostream>
#include<clocale>
#include<conio.h>

#include"prueba.cpp"
#include"Filetxt.cpp"
#include"Primos.cpp"
#include"Recursiva.cpp"
#include"BT.cpp"


using namespace std;

struct coord
{

    int x,y,x1,y1;

};

COORD GetConsoleCursorPosition(HANDLE hConsoleOutput);
void gotoxy (int x, int y);
void gotoxy (int p,bool xy);

coord Boton(int x, int y, string Texto);

int main()
{

    Resize_Window(1000,800);
    otherBlowjob();

    system("cls");
    plan:
        system("cls");
        
        gotoxy(37,2);
        cout<<"Programa general para la evaluacon del 3"<<char(167)<<" parcial";

        coord Botones[5];

        Botones[0] = Boton(15,5,"               Palindromos              ");
        Botones[1] = Boton(68,5,"        Suma de Primos en lista         ");
        Botones[2] = Boton(15,10,"    Palabra repetidas en un archivo     ");
        Botones[3] = Boton(68,10,"       Primos en un Arbol Binario       ");
        Botones[4] = Boton(56,13," Concluir ");

        cout<<"\n\nBotones: "<<Botones[2].x<<" "<<Botones[2].x1<<"  "<<Botones[2].y<<" "<<Botones[2].y1;

        bool paso_perro = false;


        do

        {    
            mouseCoord M;
            M = GetMouse();

            if(M.l)
            {

                if(M.x > Botones[0].x && M.x < Botones[0].x1)
                {

                    if(M.y > Botones[0].y && M.y < Botones[0].y1)
                    {

                        paso_perro = true;
                        system("cls");
                        system("color F0");
                        Recursiva();
                        getch();
                        goto plan;
                        
                    }

                }
                if(M.x > Botones[1].x && M.x < Botones[1].x1)
                {

                    if(M.y > Botones[1].y && M.y < Botones[1].y1)
                    {

                        paso_perro = true;
                        system("cls");
                        system("color 2E");
                        Primos();
                        getch();
                        goto plan;
                        
                    }

                }
                if(M.x > Botones[2].x && M.x < Botones[2].x1)
                {

                    if(M.y > Botones[2].y && M.y < Botones[2].y1)
                    {

                        paso_perro = true;
                        system("cls");
                        system("color B5");
                        Filetxt();
                        getch();
                        goto plan;
                        
                    }

                }
                if(M.x > Botones[3].x && M.x < Botones[3].x1)
                {

                    if(M.y > Botones[3].y && M.y < Botones[3].y1)
                    {

                        paso_perro = true;
                        system("cls");
                        system("color 61");
                        //Filetxt();
                        getch();
                        goto plan;
                        
                    }

                }
                if(M.x > Botones[4].x && M.x < Botones[4].x1)
                {

                    if(M.y > Botones[4].y && M.y < Botones[4].y1)
                    {

                        paso_perro = true;
                        system("cls");
                        system("color 4F");
                        
                    }

                }

            }

            Sleep(50);
            gotoxy(50,19);
            cout<<"coord: "<<M.x<<"   "<<M.y;

        }while(!paso_perro);

    gotoxy(50,19);
    cout<<"Gracias vuelva pronto";
    getch();

}

coord Boton(int x, int y, string Texto)
{

    gotoxy(x,y);
    cout<<char(201);
    for(int i = 0 ; i < Texto.length();i++)
    {

        cout<<char(205);

    }
    cout<<char(187);

    gotoxy(x,y+1);
    cout<<char(186)<<Texto<<char(186);

    gotoxy(x,y+2);
    cout<<char(200);
    for(int i = 0 ; i < Texto.length();i++)
    {

        cout<<char(205);

    }
    cout<<char(188);

    coord T ;
    T.x = x*8;
    T.y = y*16 ;
    T.x1 = (Texto.length()+2+x)*8;
    T.y1 = (y+2) * 16;

    return T;
    
}

































COORD GetConsoleCursorPosition(HANDLE hConsoleOutput)
{
    CONSOLE_SCREEN_BUFFER_INFO cbsi;
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
    {
        return cbsi.dwCursorPosition;
    }
    else
    {
        // The function failed. Call GetLastError() for details.
        COORD invalid = { 0, 0 };
        return invalid;
    }
}

void gotoxy (int x, int y)
{
    HANDLE  hCon;
    hCon = GetStdHandle (STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition (hCon, dwPos);    
}

void gotoxy (int p,bool xy)
{
    HANDLE  hCon;
    hCon = GetStdHandle (STD_OUTPUT_HANDLE);
    COORD dwPos;
    if(xy){
    	dwPos.X = p;
    	dwPos.Y = GetConsoleCursorPosition(hCon).Y;
	}else{
		dwPos.Y = p;
    	dwPos.X = GetConsoleCursorPosition(hCon).X;
	}
    
    
    SetConsoleCursorPosition (hCon, dwPos);    
}
