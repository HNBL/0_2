// Программа для рассчета км\ч в м\с


#include <iostream>
using namespace std;




double V()
{
    double V;
    cout << "С какой скоростью движется объект в КМ в час?   ";
    cin >> V;
    return V;

}


double KMinM(double V)  
{
    double Vm, Vc;
    Vm = V * 1000 / 60;
    Vc = Vm / 60;
    return Vc; 
}


int main()
{
    setlocale(LC_ALL, "Russian");
    double Vt = V(); 
    
    cout << "Расстояние в метрах в секунду" << "  " << KMinM(Vt) << endl;
    return 0; 
}



