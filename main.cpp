#include <iostream>

using namespace std;

int main() {

    double costo = 0, soldi, resto, denaromancante;
    int numero;

    cout << "Ciao! Benvenuto nel distributore delle bevande" << endl;
    cout << "come posso aiutarti?" << endl << endl;
    cout << "Ecco a te la lista delle bevande disponibili con i rispettivi numeri:" << endl << endl;
    cout << "[1] Bottiglietta d'acqua naturale - [1 EUR] \n[2] Esta The' Pesca - [2 EUR] \n[3] Esta The' Limone - [2 EUR] \n[4] Coca Cola 1L - [2.50 EUR] \n[5] Fanta - [2.50 EUR] \n[6] Brasilena - [2 EUR]\n" << endl;
    cout << "Inserisci il denaro:" << endl;
    cin >> soldi;
    start:
    cout << "Inserisci il numero del prodotto:" << endl;
    cin >> numero;

    switch(numero) {
        case 1:
            costo = 1;
            if (soldi >= costo) {
                resto=soldi-costo;
                cout << "Hai acquistato una bottiglietta d'acqua!" << endl;
                if (resto > 0) {
                    cout << "Ecco a te il resto, " << resto << " euro" << endl;
                }
            } else {
                cout << "Non hai abbastanza soldi, te ne mancano" << denaromancante << endl;
            }
            break;
        case 2:
            costo = 2;
            if (soldi >= costo) {
                resto=soldi-costo;
                cout << "Hai acquistato l'Esta The' alla pesca!" << endl;
                if (resto > 0) {
                    cout << "Ecco a te il resto, " << resto << " euro" << endl;
                }
            } else {
                cout << "Non hai abbastanza soldi, te ne mancano: " << denaromancante << endl;
            }
            break;
        case 3:
            costo = 2;
            if (soldi >= costo) {
                resto=soldi-costo;
                cout << "Hai acquistato l'Esta The' al limone!" << endl;
                if (resto > 0) {
                    cout << "Ecco a te il resto, " << resto << " euro" << endl;
                }
            } else {
                cout << "Non hai abbastanza soldi, te ne mancano: " << denaromancante << endl;
            }
            break;
        case 4:
            costo = 2.50;
            if (soldi >= costo) {
                resto=soldi-costo;
                cout << "Hai acquistato la Coca-Cola da 1L!" << endl;
                if (resto > 0) {
                    cout << "Ecco a te il resto, " << resto << " euro" << endl;
                }
            } else {
                cout << "Non hai abbastanza soldi, te ne mancano: " << denaromancante << endl;
            }
            break;
        case 5:
            costo = 2.50;
            if (soldi >= costo) {
                resto=soldi-costo;
                cout << "Hai acquistato la bottiglietta di Fanta!" << endl;
                if (resto > 0) {
                    cout << "Ecco a te il resto, " << resto << " euro" << endl;
                }
            } else {
                cout << "Non hai abbastanza soldi, te ne mancano: " << denaromancante << endl;
            }
            break;
        case 6:
            costo = 2;
            denaromancante = costo-soldi;
            if (soldi >= costo) {
                resto=soldi-costo;
                cout << "Hai acquistato la Brasilena!" << endl;
                if (resto > 0) {
                    cout << "Ecco a te il resto, " << resto << " euro" << endl;
                }
            } else {
                cout << "Non hai abbastanza soldi, te ne mancano: " << denaromancante << endl;
            }
            break;
        default:
            cout << "Il numero specificato non e' associato a nessun prodotto, riprova." << endl;
            goto start;
    }

    return 0;
}
