#include <iostream>

using namespace std;

int vc1 = 0;
int vc2 = 0;
int vc3 = 0;
int vc4 = 0;
int vc5 = 0;
int c;
int v=1;
int Tvotos = 0;

int main()
{
    do
    {
        cout << "Ingreasa solamente el numero del candidato o 0 para salir\n";
        cout <<"1.Primer candidato\n";
        cout <<"2.Segundo candidato\n";
        cout <<"3.Tercer candidato\n";
        cout <<"4.Cuarto candidato\n";
        cout <<"5.Quinto candidato\n";
        cin >> c;

        if (c==0)
        {
            v=0;
        }else if (c==1)
        {
            vc1 ++;
        }else if (c==2)
        {
            vc2 ++;
        }else if (c==3)
        {
            vc3 ++;
        }else if (c==4)
        {
            vc4++;
        }else if (c==5)
        {
            vc5++;
        }
        
        Tvotos ++;

    }while (v!=0);

float PorcentajeC1 = ((vc1*100)/Tvotos);
float PorcentajeC2 = ((vc2*100)/Tvotos);
float PorcentajeC3 = ((vc3*100)/Tvotos);
float PorcentajeC4 = ((vc4*100)/Tvotos);
float PorcentajeC5 = ((vc5*100)/Tvotos);

    cout << "Resultados de los votos\n";
    cout << "Votos de Candidato 1: " << vc1 << " Porcentaje: "<<float(PorcentajeC1)<<"%\n";
    cout << "Votos de Candidato 2: " << vc2 << " Porcentaje: "<<float(PorcentajeC2)<<"%\n";
    cout << "Votos de Candidato 3: " << vc3 << " Porcentaje: "<<float(PorcentajeC3)<<"%\n";
    cout << "Votos de Candidato 4: " << vc4 << " Porcentaje: "<<float(PorcentajeC4)<<"%\n";
    cout << "Votos de Candidato 5: " << vc5 << " Porcentaje: "<<float(PorcentajeC5)<<"%\n";
    cout << "Total de los votos: " << Tvotos << "\n";

    system("pause");
    return 0;
}