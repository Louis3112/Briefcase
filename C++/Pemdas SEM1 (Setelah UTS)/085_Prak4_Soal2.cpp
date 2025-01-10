#include <bits/stdc++.h>
using namespace std;

int main () {
    char NamaMember[][10] = {
        "aschel", "acel", "amanda", "manda", "christy", "angel", "kitoy", "lia", "oreli", "zee", "zizi", "zizoy", "zoya",
        "callie", "keli", "oniel", "syafa", "ola", "olali", "febri", "feni", "mpen", "fiony", "pio", "flora", "flo", "freya", "fre",
        "nurdana", "ella", "gaby", "gita", "eli", "helisma", "indah", "indira", "dira", "jessi", "jeci", "lyn", "kathrina", "kathrin",
        "atin", "marsha", "matcha", "mutiara", "muthe", "raisha", "adel", "dedel", "shani", "gracia", "chika", "yessika"
    };

    string Perkenalan;
    getline (cin, Perkenalan);

    size_t kalimat = Perkenalan.rfind(" ") + 1;
    string Jiko = Perkenalan.substr(kalimat);

    for (int i = 0; i < 60; i++) {
        if (Jiko == NamaMember[i]) {
            cout << Jiko << endl;
            return 0;
        }
    }
}

/*char NamaMember[][10] = {
        "aschel", "acel", "amanda", "manda", "christy", "angel", "kitoy", "lia", "oreli", "zee", "zizi", "zizoy", "zoya",
        "callie", "keli", "oniel", "syafa", "ola", "olali", "febri", "feni", "mpen", "fiony", "pio", "flora", "flo", "freya", "fre",
        "nurdana", "ella", "gaby", "gita", "eli", "helisma", "indah", "indira", "dira", "jessi", "jeci", "lyn", "kathrina", "kathrin",
        "atin", "marsha", "matcha", "mutiara", "muthe", "raisha", "adel", "dedel", "shani", "gracia", "chika", "yessika"
    };

    string Perkenalan;
    getline(cin,Perkenalan);

    for (const auto& name : NamaMember) {
        size_t found = Perkenalan.find(name);
        if (found != std::string::npos) {
            cout << name;
        }
    } */