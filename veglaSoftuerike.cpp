#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Enumeracion per statusin e librit
enum StatusiLibrit {
    I_Disponueshem,
    I_Huazuar,
    I_Rezervuar
};

// Struktura per te perfaqesuar nje liber
struct Liber {
    int id;
    string titulli;
    string autori;
    StatusiLibrit statusi;
};

// Funksion per te shfaqur statusin e librit si tekst
string merrStatusinSiTekst(StatusiLibrit statusi) {
    switch (statusi) {
        case I_Disponueshem: return "I Disponueshem";
        case I_Huazuar: return "I Huazuar";
        case I_Rezervuar: return "I Rezervuar";
        default: return "I Panjohur";
    }

}

// Funksion per te shtuar nje liber ne liste
void shtoLiber(vector<Liber>& librat, int id, string titulli, string autori) {

    librat.push_back({id, titulli, autori, I_Disponueshem});

}
// Funksion per te shfaqur te gjithe librat me formatim te mire
void shfaqLibrat(const vector<Liber>& librat) {
    cout << "\n---------------------------------------------------------------------------------\n";
    cout << left << setw(10) << "ID" << setw(30) << "Titulli" << setw(25) << "Autori" << "Statusi" << endl;
    cout << "---------------------------------------------------------------------------------\n";

    for (const auto& liber : librat) {
        cout << left << setw(10) << liber.id << setw(30) << liber.titulli
             << setw(25) << liber.autori << merrStatusinSiTekst(liber.statusi) << endl;
    }
    cout << "---------------------------------------------------------------------------------\n";
}

// Funksion per te huazuar nje liber

void huazoLiber(vector<Liber>& librat, int id) {

    for (auto& liber : librat) {
        if (liber.id == id) {
            if (liber.statusi == I_Disponueshem) {
                liber.statusi = I_Huazuar;
                cout << "E keni huazuar librin: " << liber.titulli << endl;
            } else {
                cout << "Libri nuk eshte i disponueshem.\n";
            }
            return;
        }
    }

    cout << "Libri nuk u gjet.\n";

}

// Funksion per te kthyer nje liber

void ktheLiber(vector<Liber>& librat, int id) {

    for (auto& liber : librat) {
        if (liber.id == id) {
            if (liber.statusi == I_Huazuar) {
                liber.statusi = I_Disponueshem;
                cout << "E keni kthyer librin: " << liber.titulli << endl;
            } else {
                cout << "Libri nuk ishte i huazuar.\n";
            }
            return;
        }
    }
    cout << "Libri nuk u gjet.\n";
}



// Funksioni kryesor
int main() {
    vector<Liber> librat;

    // Shto disa libra
    shtoLiber(librat, 1, "Programimi C++", "Autori A");
    shtoLiber(librat, 2, "Algoritmet", "Autori B");
    shtoLiber(librat, 3, "Fizika ", "Autori C");

    // Shfaq librat
    shfaqLibrat(librat);

    // Huazo një liber
    cout << "\nHuazo librin me ID 2:\n";
    huazoLiber(librat, 2);

    // Shfaq librat perseri

    cout << "\nLista pas huazimit:\n";
    shfaqLibrat(librat);

    // Kthe librin me ID 2
    cout << "\nKthe librin me ID 2:\n";
    ktheLiber(librat, 2);

    // Shfaq librat perseri
    cout << "\nLista pas kthimit:\n";
    shfaqLibrat(librat);

    return 0;

}