#include <iostream>
using namespace std;

float CalcularPrecioPaquete(float pesoPaquete, int numPaquetes)
{
    float precioLibra = pesoPaquete * 7.0;
    return precioLibra * numPaquetes;
}



int main()
{

    int numPaquetes;
    float precioLibra, pesoPaquete;
    float totalSinDescuento, descuento, totalConDescuento;


    cout<<"Ingrese el peso del paquete (en libras) ";
    cin>>precioLibra;

    cout<<"Ingrese el numero de paquetes ";
    cin>>numPaquetes;

    float precioPaquete = CalcularPrecioPaquete(precioLibra, numPaquetes);

    totalSinDescuento = numPaquetes * precioPaquete;

    if(precioLibra > 15)
    {
        descuento = totalSinDescuento * 0.1;
    }else
    {
        descuento = 0;

    }

    

    cout<<"Detalle de precio"<<endl;
    cout<<"Numero de paquetes "<<endl;
    cout<<"Precio por paquete "<<endl;
    cout<<"Total sin descuento "<<endl;
    cout<<"Descuento "<<endl;
    cout<<"Total aplicando el descuento "<<endl;




 return 0;
}