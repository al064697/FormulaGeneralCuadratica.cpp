#include <iostream>
#include <string>
#include <cmath>;

using namespace std;

int main() {
    char NEWLINE = '\n';
    string entradaA, entradaB, entradaC;
    cout << "Ingrese un valor para A: ";
    getline(cin, entradaA);
    cout << "Ingrese un valor para B: ";
    getline(cin, entradaB);
    cout << "Ingrese un valor para C: ";
    getline(cin, entradaC);
    int A = stoi(entradaA), B = stoi(entradaB), C = stoi(entradaC);
    if ((A == 0) && (B == 0)) {
        cout << "La ecuacion es denegada" << endl;
    } else if((A == 0) && (B != 0)) {
        cout << "Existe una raíz cuadrada única con valor de " <<C / B << endl;
    } else {
        int discriminante = pow(B, 2) - (4 *(A * C));
        if (discriminante >= 0) {
            int x1 = (int) (-B + sqrt(discriminante)) / 2 * A;
            int x2 = (int) (-B - sqrt(discriminante)) / 2 * A;
            cout << "Existen dos raíces cuadradas: " << endl;
            cout << "x1 = " << x1 << "; " <<"x2 = " << x2 << endl;
        } else if( discriminante == 0) {
            int x1 = (int) (-B + sqrt(discriminante)) / 2 * A;
            int x2 = (int) (-B - sqrt(discriminante)) / 2 * A;
            cout << "Existe una raiz cuadrada real" << NEWLINE << "x1 = " << x1 << "; " << "x2 = " << x2 <<endl;
        } else if(discriminante < 0) {
            cout << "Existen dos raices compuestas" << endl;
            cout << "x1 = " << (int) (-B / (2 *A) ) << "+" << (int) (sqrt(abs(discriminante)) / 2 * A) << "i" << endl;
            cout << "x2 = " << (int) (-B / (2 * A)) << "-" << (int) (sqrt(abs(discriminante)) / (2 * A)) << "i" << endl;
        }
    }
    return 0;
}
