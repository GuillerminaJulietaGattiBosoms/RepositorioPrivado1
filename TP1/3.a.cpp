#include <iostream>
using namespace std;

int main()
{
    float m, k, v=3.6;
    cout << "Ingrese la velocidad en mts/seg: " << endl;
    cin >> m;
    k=m*v;
    cout << "Son " << k << " kilómetros por hora." << endl;

    return 0;
}
