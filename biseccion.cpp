#include<iostream> 
#include<cmath>//biblioteca para poder utilizar la funcion pow() 
using namespace std; 
/*para encontrar una raiz de la ecuación f(x)=0 analiticamente, proporcionar la funcion 
F(X) 
DATOS: 
-->a Y b que forman un intervalo, en donde se halla una raiz 
-->TOL criterio de convergencia//la tolerancia 
-->MAXIT número maximo de iteraciones 
RESULTADOS: 
-->X la raiz aproximada o mensaje de falla 
*/ 
double F(double x){ 
     
    
    return 0.5*(pow(2.718281828, -(x)/(2*3.141592654)))*sin(x) - 0.25;
} 
double biseccion(double a,double b,int MAXIT,double TOL){ 
    int cont=1; 
    double c; 
    double fc; 
    cout << "n" << "\t" << "a" << "\t" << "b" << "\t" << "c" << "\t" << "error" << endl;
    while(cont<MAXIT){ 
        c=(a+b)/2; 
        fc=F(c); 
        cout << cont-1  << "\t" << a << 	"\t" << b << "\t" << c<< "\t" << abs(b- a)/2 << endl;
        if(abs(b-a)/2<TOL){ 
            return c; 
        }
        if(F(a)*fc<0) 
            b=c; 
        if(fc*F(b)<0) 
            a=c; 
        cont=cont+1;
    } 
    return c;
} 


int main (int argc, char *argv[]) { 
    cout<<biseccion(0,2.1,100,0.2); 
    return 0; 
}
