// para c++

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string texto;
    cout << "Escribe el texto que deseas guardar: ";
    getline(cin, texto);

    ofstream archivo("texto_guardado.txt");
    if (archivo.is_open()) {
        archivo << texto;
        archivo.close();
        cout << "Texto guardado correctamente en el archivo 'texto_guardado.txt'" << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }

    return 0;
}
