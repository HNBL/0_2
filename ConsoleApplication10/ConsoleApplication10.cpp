// ��������� ��� �������� ��\� � �\�


#include <iostream>
using namespace std;




double V()
{
    double V;
    cout << "� ����� ��������� �������� ������ � �� � ���?   ";
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
    
    cout << "���������� � ������ � �������" << "  " << KMinM(Vt) << endl;
    return 0; 
}



