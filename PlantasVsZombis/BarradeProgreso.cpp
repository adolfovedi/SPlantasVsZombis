#include "BarradeProgreso.h"

BarradeProgreso::BarradeProgreso(int total) : totalZombies(total), zombisRestantes(total) {}

void BarradeProgreso::actualizar(int restantes) {
    zombisRestantes = restantes;
}

void BarradeProgreso::mostrar() {
    int progreso = static_cast<int>((static_cast<double>(totalZombies - zombisRestantes) / totalZombies) * 100);

    cout << "[" << setw(3) << progreso << "%] [";
    for (int i = 0; i < 50; ++i) {
        if (i < progreso / 2) {
            cout << "=";
        }
        else {
            cout << " ";
        }
    }
    cout << "] " << zombisRestantes << " zombis restantes" << endl;
}