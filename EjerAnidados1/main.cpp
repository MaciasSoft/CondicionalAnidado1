#include <iostream>

using namespace std;

int main()
{
    int numComp,totCompra,descuento;
    int precioUnitario;
    precioUnitario=11000;
    cout <<"VENTA DE EQUIPOS DE COMPUTACION (Precio Unitario: $11000)"<<endl<<endl;
    cout << "Introduzca el numero de computadores que desea comprar: ";
    cin >>numComp;

    if(numComp>0 && numComp<5)
    {
        descuento=((numComp*precioUnitario)*10)/100;
        totCompra=(numComp*precioUnitario)-descuento;
        //cout<<"el Costo de los equipos es: ";
        cout <<"El costo de los equipos con un descuento del 10% es: "<<totCompra<<endl;
    }
    else
    {
        if (numComp>=5 && numComp<10)
        {
            descuento=((numComp*precioUnitario)*20)/100;
            totCompra=(numComp*precioUnitario)-descuento;
            //cout<<"el Costo de los equipos es: ";
            cout <<"El costo de los equipos con un descuento del 20% es: "<<totCompra<<endl;
        }
        else
            {
                if (numComp>0)
                {
                    descuento=((numComp*precioUnitario)*40)/100;
                    totCompra=(numComp*precioUnitario)-descuento;
                    //cout<<"el Costo de los equipos es: ";
                    cout <<"El costo de los equipos con un descuento del 40% es: "<<totCompra<<endl;
                }
                else{cout <<"Valor Incorrecto"<<endl;}
            }
    }


    return 0;
}
