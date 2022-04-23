#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
	public:
		void input();
		int proses();
		void output();
		
	private:
		string nama,pd,matkul;
    	long int nim;
    	int i,mk,sks;
    	int ts, total;
    	
};

void mahasiswa::input(){
	cout<<"NIM :";
	cin>>nim;
	cout<<"Nama :";
	cin>>nama;
	cout<<"Prodi";
	cin>>pd; 
	cout<<"Jumlah Matkul";
	cin>>mk;
}

int mahasiswa::proses(){
	int hasil;
   
    for (i=0; i<mk; i++){
        cout<<" Matkul      : ";cin>>matkul;
        cout<<" sks : ";cin>>sks;
        ts+=sks;
    }
    total=tarif*ts;
    
    return proses();
}
void mahasiswa::output(){
	cout<<"NIM :";
	cout<<"Nama :";
	cout<<"Prodi :";
	cout<<"Jumlah Matkul"
}
    cout<<"----------------------------------------"<<endl;
    cout<<" Jumlah SKS       : ";cout<<ts<<endl;
    cout<<" Total Pembayaran : ";cout<<total<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    cout<<"----------------------------------------"<<endl;
    
    return 0;
}
