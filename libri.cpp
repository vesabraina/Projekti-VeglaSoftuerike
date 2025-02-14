#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Enumeracion per statusin e librit
enum StatusiLibrit {
    I_Disponueshem,
    I_Huazuar,
    I_Rezervuar,
    I_Humbur
};

// Struktura per Librin
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
        case I_Humbur: return "I Humbur";
        default: return "I Panjohur";
    }
}

// Funksion per te shtuar nje liber
void shtoLiber(vector<Liber>& librat, int id, string titulli, string autori) {
    librat.push_back({id, titulli, autori, I_Disponueshem});
}

// Funksion per te shfaqur te gjithe librat me formatim te mire
void shfaqLibrat(const vector<Liber>& librat) {
    cout << "\n================== Lista e Librave ==================\n";
    cout << left << setw(10) << "ID" 
         << setw(30) << "Titulli" 
         << setw(25) << "Autori" 
         << "Statusi" << endl;
    cout << "-----------------------------------------------------\n";

    for (const auto& liber : librat) {
        cout << left << setw(10) << liber.id 
             << setw(30) << liber.titulli
             << setw(25) << liber.autori 
             << merrStatusinSiTekst(liber.statusi) << endl;
    }
    cout << "-----------------------------------------------------\n";
}

// Funksion per te kerkuar libra
void kerkoLiber(const vector<Liber>& librat, string kerkesa) {
    cout << "\nRezultatet e kerkimit per: " << kerkesa << endl;
    for (const auto& liber : librat) {
        if (liber.titulli.find(kerkesa) != string::npos || 
            liber.autori.find(kerkesa) != string::npos) {
            cout << left << setw(10) << liber.id 
                 << setw(30) << liber.titulli
                 << setw(25) << liber.autori 
                 << merrStatusinSiTekst(liber.statusi) << endl;
        }
    }
}

// Funksion per te fshire nje liber
void fshijLiber(vector<Liber>& librat, int id) {
    for (auto it = librat.begin(); it != librat.end(); ++it) {
        if (it->id == id) {
            cout << "\nLibri '" << it->titulli << "' u fshi me sukses!\n";
            librat.erase(it);
            return;
        }
    }
    cout << "\nLibri me ID: " << id << " nuk u gjet.\n";
}

// Funksion per te ndryshuar statusin ne 'I Humbur'
void humbLiber(vector<Liber>& librat, int id) {
    for (auto& liber : librat) {
        if (liber.id == id) {
            liber.statusi = I_Humbur;
            cout << "\nLibri '" << liber.titulli << "' u shenua si 'I Humbur'.\n";
            return;
        }
    }
    cout << "\nLibri me ID: " << id << " nuk u gjet.\n";
}

// Funksion per te shfaqur menune
void shfaqMenune() {
    cout << "\n============== Menyja e Librave ==============\n";
    cout << "1. Shfaq te gjithe librat\n";
    cout << "2. Kerko liber\n";
    cout << "3. Fshij liber\n";
    cout << "4. Shenjo liber si 'I Humbur'\n";
    cout << "5. Dil\n";
    cout << "==============================================\n";
    cout << "Zgjedh opsionin: ";
}

int main() {
    vector<Liber> librat;

    // Shto disa libra
    shtoLiber(librat, 1, "Programimi C++", "Autori A");
    shtoLiber(librat, 2, "Algoritmet", "Autori B");
    shtoLiber(librat, 3, "Strukturat e te Dhenave", "Autori C");
    shtoLiber(librat, 4, "Fizika", "Autori D");

    int zgjedhja;
    do {
        shfaqMenune();
        cin >> zgjedhja;
        
        switch (zgjedhja) {
            case 1:
                shfaqLibrat(librat);
                break;
            case 2: {
                string kerkesa;
                cout << "Sheno titullin ose autorin: ";
                cin.ignore();
                getline(cin, kerkesa);
                kerkoLiber(librat, kerkesa);
                break;
            }
            case 3: {
                int id;
                cout << "Sheno ID e librit per fshirje: ";
                cin >> id;
                fshijLiber(librat, id);
                break;
            }
            case 4: {
                int id;
                cout << "Sheno ID e librit per ta shenuar si 'I Humbur': ";
                cin >> id;
                humbLiber(librat, id);
                break;
            }
            case 5:
                cout << "\nDuke dalur nga programi... Faleminderit!\n";
                break;
            default:
                cout << "\nZgjedhje e pavlefshme! Provo perseri.\n";
        }
    } while (zgjedhja != 5);

    return 0;
}
