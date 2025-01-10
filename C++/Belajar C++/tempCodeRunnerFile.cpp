int main(){
string kalimat;
getline(cin, kalimat);

int posisi = 0;
int jumlah = 0;
while(true){
    posisi = kalimat.find(" ", posisi + 1);
    jumlah++;

    if(posisi < 0){
        break;
    }
}

cout << "Banyaknya kata dalam kalimat tersebut adalah " << jumlah;