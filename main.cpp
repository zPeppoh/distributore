#include <iostream>

using namespace std;

// Ho creato lo struct mettendo il nome del prodotto e il prezzo. Ho messo double perchè così può avere un numero decimale.
struct Prodotto {
    string nome;
    double prezzo;
};

// Questa è la funzione che mostra i prodotti che ci sono.
void visualizzaProdotti(Prodotto prodotti[], int numProdotti) {
    cout << "Ecco a te la lista delle bevande disponibili con i rispettivi numeri:" << endl << endl;

    for (int i = 0; i < numProdotti; ++i) { // Come spiegato dal prof, ho utilizzato ++i invece di i++ perchè aumenta di 1 prima di eseguire il ciclo
        cout << "[" << (i + 1) << "] " << prodotti[i].nome << " - [" << prodotti[i].prezzo << " EUR]" << endl;
    }
}

// Questa funzione invece gestisce l'acquisto del prodotto. Ovviamente ho usato il void perchè non deve restituire niente
void acquistaProdotto(Prodotto &prodotto, double &soldi) { // Le e commerciali (&) le ho usate così prendono l'indirizzo
    double denaroMancante = prodotto.prezzo - soldi;

    if (soldi >= prodotto.prezzo) {
        double resto = soldi - prodotto.prezzo;
        cout << "Hai acquistato " << prodotto.nome << "!" << endl;
        if (resto > 0) {
            cout << "Ecco a te il resto, " << resto << " euro" << endl;
        }
        soldi = resto;
    } else {
        cout << "Non hai abbastanza soldi, te ne mancano: " << denaroMancante << " euro" << endl;
    }
}

int main() {
    // HO USATO LA COSTANTE, PERCHE' NON DEVE CAMBIARE IL VALORE!!!
    const int numProdotti = 6;

    // Array di Prodotto (struct)
    Prodotto prodotti[numProdotti] = {
            {"Bottiglietta d'acqua naturale", 1.0},
            {"Esta The' Pesca", 2.0},
            {"Esta The' Limone", 2.0},
            {"Coca Cola 1L", 2.5},
            {"Fanta", 2.5},
            {"Brasilena", 2.0}
    };

    double soldi;
    int numero;
    bool vuoiContinuare = true;

    // Ho fatto un boolean, così se è vera continua, altrimenti si interrompe diventando falsa.

    cout << "Ciao! Benvenuto nel distributore delle bevande" << endl;
    cout << "Come posso aiutarti?" << endl << endl;
    while (vuoiContinuare) { // (Mettendo così significa che deve essere true)
        visualizzaProdotti(prodotti, numProdotti);

        cout << "\nInserisci il denaro:" << endl; // ho usato \n davanti per lasciare lo spazio facendo andare a capo
        cin >> soldi;

        start:
        cout << "Inserisci il numero del prodotto:" << endl;
        cin >> numero;

        if (numero < 1 || numero > numProdotti) {
            cout << "Il numero specificato non e' associato a nessun prodotto, riprova." << endl;
            goto start;
        }

        acquistaProdotto(prodotti[numero - 1], soldi);

        // Menu dopo l'acquisto
        cout << "\nVuoi fare altri acquisto? (s/n): ";
        char scelta;
        cin >> scelta;

        if (scelta != 's' && scelta != 'S') {
            vuoiContinuare = false;
        }
    }
    cout << "Grazie per aver utilizzato il nostro distributore, buona giornata!" << endl;
    return 0;
}