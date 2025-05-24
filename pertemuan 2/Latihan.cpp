#include <iostream>
using namespace std;

int main()
{
    system("cls");
    const float phi=3.14; //deklarasi konstanta
    float r,volume,luas;
    cout<<"masukkan jari-jari: ";
    cin>>r;

    volume=((float)4/(float)3)*phi*r*r*r; //rumus volume bola
    luas=4*phi*r*r; //rumus luas bola

    cout<<"volume bola= "<<volume<<endl;
    cout<<"luas permukaan bola= "<<luas<<endl
}
