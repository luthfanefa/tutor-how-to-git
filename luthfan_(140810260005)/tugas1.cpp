#include <iostream>

using namespace std;

void header(){
    cout << "----------------------" << endl
         << "   KASIR TOKO BUKU    " << endl
         << "----------------------" << endl;
}
void menu() {
    cout << "1. Buku______50000 Rp." << endl
         << "2. Pensil____30000 Rp." << endl
         << "3. Pulpen____35000 Rp." << endl
         << "4. lanjut____________." << endl;

}
void garis (){
    cout << "----------------------" << endl ;
}
void cekdiskon (const int &a){
    if (a < 100000) {
        cout << "potongan harga (2%) : " << a*0 << endl ;
        cout << "Grand Total : " << a-a*0 << endl ;
    } else if ( a >= 100000 || a < 299999 ){
        cout << "potongan harga (10%) : " << a*0.1 << endl ;
        cout << "Grand Total : " << a-a*0.1 << endl ;
    } else {
        cout << "potongan harga (20%) : " << a*0.2 << endl ;
        cout << "Grand Total : " << a-a*0.2 << endl ;
    }
}
main (){

    int jenis_b;
    int qty, total = 0;
    header();
    menu();
    cout << "-" ;
    cin >> jenis_b ;

    while (jenis_b != 4) {
 
        switch (jenis_b){
        case 1:
            cout << "Qty : ";
            cin >> qty;
            total += 50000*qty ;
        break;
        case 2:
            cout << "Qty : ";
            cin >> qty;
            total += 30000*qty ;
        break;
        case 3:
            cout << "Qty : ";
            cin >> qty;
            total += 35000*qty ;
        break;
    }
    cout << "SubTotal : " << total << " Rp." << endl ;
    garis();
    menu();
    cout << "-" ;
    cin >> jenis_b ;
    }

    garis();
    cout << "Total : " << total << endl;
    cekdiskon(total);
    garis();

    cin >> total;
    return 0;
}