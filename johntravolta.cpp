#include <iostream>
using namespace std;

int main() {
	int ratesalary = 15000;
	int weekgaji = 600000;
	int gaji, pemasukan, pengeluaran;
	int jamkerja;
	
	cout << "Gaji / Jam: " << ratesalary << endl;
	cout << "Gaji Normal Seminggu: " << weekgaji<< endl;
	
	cout << "Jam Kerja Selama Seminggu: ";
	cin >> jamkerja;
	
	if(jamkerja<=40){
		gaji = jamkerja*ratesalary;
		cout << endl << "Gaji Mr John Travolta Selama Seminggu adalah: " << gaji << endl;
	}
	else if(jamkerja>40){
	
		int jamlembur, lembur, gajilembur;
		jamlembur = jamkerja-40;
		lembur = jamlembur*1.5*ratesalary;
		gaji= lembur+weekgaji;
		cout<< gaji;
	}
	pemasukan = gaji;
	cout<<endl<<"Masukkan Pengeluaran selama seminggu:";
	cin>>pengeluaran;
	if(pengeluaran<pemasukan){
		int tabungan;
		tabungan= pemasukan-pengeluaran;
		cout<< endl <<"Anda dapat Menabung Sebanyak:"<<tabungan;
	}
	else if(pengeluaran==pemasukan){
		cout<<"Anda Tidak Dapat Menabung";
	}
	else{
		cout<<"Pengeluaran Anda Berlebihan";
	}
	
}
