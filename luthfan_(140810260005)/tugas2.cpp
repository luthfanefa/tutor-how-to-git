#include <iostream>

using namespace std;

void header(){
    cout << "----------------------" << endl
         << "    MESIN MINUMAN     " << endl
         << "----------------------" << endl;
}
void menu() {
    cout << "1. jus________50000 Rp." << endl
         << "2. teh kotak__30000 Rp." << endl
         << "3. sprite_____35000 Rp." << endl;

}
void garis (){
    cout << "----------------------" << endl ;
}
void kembalian (int a){
    int lima = 0, seribu = 0;
    while (a >= 5000){
        a -= 5000;
        lima++ ;
    }
    while (a > 0){
        a -= 1000;
        seribu++ ;
    }
    cout << "kembalian 5000-nya " << lima << endl;
    cout << "kembalian 1000-nya " << seribu << endl;
}

main (){

    int jenis_b;
    int qty, total = 0;
    header();
    menu();
    cout << "-" ;
    cin >> jenis_b ;

    if (jenis_b == 1 || jenis_b == 2 || jenis_b == 3 ){
        switch (jenis_b){
        case 1:
            cout << "masukan uang (Rp) : ";
            cin >> qty;
            garis();
            if (qty > 50000) {
                qty -= 50000;
                kembalian(qty);
            }else {
                cout << "uang tidak cukup!!" << endl ;
            }
        break;
        case 2:
            cout << "masukan uang (Rp) : ";
            cin >> qty;
            garis();
            if (qty > 30000) {
                qty -= 30000;
                kembalian(qty);
            }else {
                cout << "uang tidak cukup!!" << endl ;
            }
        break;
        case 3:
            cout << "masukan uang (Rp) : ";
            cin >> qty;
            garis();
            if (qty > 35000) {
                qty -= 35000;
                kembalian(qty);
            }else {
                cout << "uang tidak cukup!!" << endl ;
            }
        break;
        } 
    }else {
        cout << "error " << endl ;
    }
    garis();

    cin >> total;
    return 0;
}