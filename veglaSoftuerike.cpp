#include <iostream>
#include <string>
#include <vector>
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
        case I_Disponueshem: return "I Disponueshëm";
        case I_Huazuar: return "I Huazuar";
        case I_Rezervuar: return "I Rezervuar";
        default: return "I Panjohur";
    }

}

// Funksion per te shtuar nje liber ne liste
void shtoLiber(vector<Liber>& librat, int id, string titulli, string autori) {

    librat.push_back({id, titulli, autori, I_Disponueshem});

}
// Funksion per te shfaqur te gjithe librat

void shfaqLibrat(const vector<Liber>& librat) {

    cout << "Lista e Librave:\n";
    cout << "ID\tTitulli\t\tAutori\t\tStatusi\n";

    for (const auto& liber : librat) {
        cout << liber.id << "\t" << liber.titulli << "\t\t" 
             << liber.autori << "\t\t" << merrStatusinSiTekst(liber.statusi) << endl;
    }

}