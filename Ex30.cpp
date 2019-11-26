/* Código tomado de mi repositorio, ejercicio 29.

#include <iostream>
#include <cmath>


    double L=1.0;
    double t=1.0;
    
    double maxk=190;
    double dt=t/maxk;
    double n=30;
    double dx=L/n;
    double b=pow(dx,2)/2;


int main()
{

    for (double k=0.0; k<maxk;k++)
    {
        for (double i=0.0; i<n;i++)
        {
			
            double res1=4*pow(sin(k*dx/2),2)*i;
            std::cout<<k<<" "<<res1<<std::endl;
        }
        
    }
    return 0;
}
