//ROBERTO GIULIANI 4AI

#include <iostream>
#include <cstdlib>
using namespace std;

float CalcoloArea(float raggio);

int main() {
    using namespace std;

    float raggio;

    cout << "Inserisci il raggio del cerchio: ";
    cin >> raggio;

    //calocolo + stampa
    float area = CalcoloArea(raggio);
    cout << "L'area del cerchio con raggio " << raggio << " e': " << area << endl;

    return 0;
}

float CalcoloArea(float raggio) {
    const float pi = 3.1415;
    return pi * raggio * raggio;
}
