#include<iostream>
using namespace std;

int X1[]={3,5,8,11,-14,30,-7,40,-39,17,10};

bool Primo(int p)
{
	
	if (p == 1 || p == 0){
		
		return (false);
		
	}
	
	bool cond = true;
	
	for (int i = 2 ; i < abs(p) ; i++)
	{
		
		if( p%i == 0){
			
			cond = false;
			break;
			
		}
		
	}
	
	return (cond);
	
}

int sum(int pos = 0)
{

    if (pos < sizeof(X1)/sizeof(X1[0]) )
    {

        if(Primo(X1[pos]))
        {
            return X1[pos]+sum(pos+1);
        }
        else
        {
            return sum(pos+1);
        }
        
    }
    return 0;

}



void Primos()
{

    cout<<"De la lista de numeros 3,5,8,11,-14,30,-7,40,-39,17,10\nse va a regresar la suma de primos que es: "<<sum();


}