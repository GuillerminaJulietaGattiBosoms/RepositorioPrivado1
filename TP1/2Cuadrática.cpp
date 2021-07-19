#include <iostream>
#include <math.h>
using namespace std;

int main(){ 
 float a, b, c, D, X1, X2;

  cout<<"Ingrese los valores a, b y c de la siguiente expresión:\nax^2+bx+c=y "<<endl;
    cout<<"Ingresa un valor para a: "<<endl; 
    cin>>a;
    cout<<"Ingresa un valor para b: "<<endl;
    cin>>b;  
    cout<<"Ingresa un valor para c: "<<endl;
    cin>>c;

    D=(b*b)-(4*a*c); // Determinante 
   X1=(-b+(pow(D,0.5)))/(2*a); //Raices X1 Y X2
   X2=(-b-(pow(D,0.5)))/(2*a);

 if (a==0) { 
     cout<<"No se puede dividir por cero, a tiene que ser distinto de cero"<<endl;  
   }
   else {
   if (D<0) { 
      cout<<"No es posible calcular una raiz negativa"<<endl;
   }          
     else { 
      if(D==0) {
        cout<<"\nSolución real: "<<"\nX= "<<X1<<endl; 
     }
       else {
         cout<<"\nSoluciones reales: \n"<<"X1= "<<X1<<"\nX2= "<<X2<<endl;  
     }
   }
 }
return 0;
}
