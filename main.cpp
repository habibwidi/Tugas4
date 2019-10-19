#include <iostream>
#include <vector>///bagian STL
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int max_inv;
    int pilihan;


    vector<string>item={"arrow","knife"};///centang C++ 11 di compiler
    vector<string>::iterator penunjuk;
    item.push_back("Sword");
    item.push_back("Shield");
    vector <vector<string>> tas;

    unsigned int maxitem=0;
    unsigned int jumlahtas=0;
    unsigned int itemterpilih=0;

    cout << "jumlah item " << item.size()<<endl;
    cout << "masukan maksimal inventori: ";
    cin >> max_inv;

    char lagi;
    do {
    cout<<"\n====================="<<endl;
    cout<<"1.tampilkan inventory\n";
    cout<<"2.hapus item\n";
    cout<<"3.tambah item\n";
    cout<<"====================="<<endl;
    cout<<"masukan pilihan anda: ";
    cin>>pilihan;


        switch(pilihan){

        case 1:{
            if(tas.empty()){
                    cout << "Iventory kosong!" << endl;
                }else{

                    cout << "\nIsi inventory : " << endl;
                    for(penunjuk=tas.begin();penunjuk!=tas.end();penunjuk++){
                         for(penunjuk2=penunjuk->begin();penunjuk2!=penunjuk->end();penunjuk2++){
                            cout << *penunjuk2 << " ";
                            }
                            cout << endl;
                         }
                }
        break;
        }
        case 2:{
        int hapus;
        if(tas.empty()){
        cout<<"inventory kosong\n"<<endl;
            }
           else{
                    unsigned int hapus=0;
                    cout << "ingin menghapus ke berapa : ";
                    cin >> hapus;
                    if(hapus>jumlahtas){
                        cout << "Item yang akan dihapus tidak ada." << endl;
                    }else{
                        tas.erase(tas.begin()+(hapus-1));
                        jumlahtas--;
                        cout << "Jumlah inventory sekarang : " << jumlahtas << endl;
                    }
                }
        break;
        }

        case 3:{
            if (jumlahtas>= maxitem) {
                    cout << "Inventory penuh ! " << endl;
                }else {
                    itemterpilih = (rand() % item.size());


                    cout << "Anda mendapat : " << item[itemterpilih][0] << " . Stat : " << item[itemterpilih][1] << endl;


                    tas.push_back(vector<string>({ item[itemterpilih][0] }));
                    tas[jumlahtas].push_back(item[itemterpilih][1]);
                    jumlahtas++;
                    cout << "Jumlah inventory sekarang : " << jumlahtas << endl;
                    break;
                }
                default : {
                    cout << "Pilihan tidak ada!"<<endl;
                    break;
                }
        }

        default:{
        cout << "tidak ada pilihan \n";
        break;}

        }
            cout<< "Ke menu Inventori(y/n): ";
            cin >> lagi;
    } while(lagi=='Y'||lagi =='y');


///coretan
    /*for(penunjuk=item.begin();penunjuk!=item.end();++penunjuk){
        cout<<*penunjuk<<endl;
    }*/

    /*for(int i=0;i<item.size();++i){
        cout<<item[i]<<endl;
    }

    cout << item[0] << endl;
    cout << item[1] << endl;
    cout << item[2] << endl;
    cout << item[3] << endl;*/

    ///if empty
//    if(item.empty()){
//        cout<<"inventory kosong"<<endl;
//    }
//    ///cara hapus
//    item.erase(item.begin());
//    cout<<"item setelah dihapus"<<endl;
//    for(penunjuk=item.begin();penunjuk!=item.end();++penunjuk){
//        cout<<*penunjuk<<endl;
//    }
    return 0;
}
