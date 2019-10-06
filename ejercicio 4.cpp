#include <iostream>


using namespace std;

int main()
{int opcion;
float a,b,suma,resta,multiplicacion,division,n,z,x,y;
cout<<"mi calculadora basica con funciones adicionales"<<endl;
cout<<"1. suma"<<endl;
cout<<"2. resta"<<endl;
cout<<"3. multiplicacion"<<endl;
cout<<"4. division"<<endl;
cout<<"5. finobacci de un numero"<<endl;
cout<<"6. factorial de un numero"<<endl;
cout<<"7. salir"<<endl;
cout<<"ingrese numero de opcion: ";
cin>>opcion;

if(opcion == 1)
    {cout<<"ingrese primer numero a sumar: ";
    cin>>a;
     cout<<"ingrese segundo numero a sumar: ";
     cin>>b;
     suma = a + b;
     cout<<"la suma es: "<<suma;
    }
    
if(opcion == 2)
{cout<<"ingrese primer numero a restar: ";
cin>>a;
cout<<"ingrese segundo numero a resta: ";
cin>>b;
resta = a - b;
cout<<"la resta es: "<<resta;
}

if(opcion == 3)
   {cout<<"ingrese primer numero a multiplicar: ";
   cin>>a;
   cout<<"ingrese segundo numero a multiplicar: ";
   cin>>b;
   multiplicacion = a * b;
   cout<<"la multiplicacion es: "<<multiplicacion;
   }
   
if(opcion == 4)
   
   {cout<<"ingrese primer numero a dividir: ";
    cin>>a;
    cout<<"ingrese segundo numero a dividir: ";
    cin>>b;
    division = a / b;
    cout<<"la division es: "<<division;
   }
   
if(opcion == 5)

   cout<<"ingrese el numero de elementos "; cin>>n;
    
    cout<<"1 ";
    for(int i=1;i<n;i++) {
    
        z = x + y;//1 2 3 5
        cout<<z<<" ";//1 2 3 5
        x = y;//1 1 2
        y = z;//1 2 3
    
    

    
   
   }
   



    
   
   
    
    
    
    
    
    
        
        
    
   
   

   
   	  
   	       
   
    
   
    
    
        
        
   
   
   
   
    
    

    
    
    
        
    
   
    

    
    
    
        
    
   
   
   
   
    
    
    
	
	
	
	
	
   

        
        
        
        
  
return 0;
}
