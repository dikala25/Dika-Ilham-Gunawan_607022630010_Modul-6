#include <iostream>
using namespace std ;

int main () {
	int a ; 
	
	cout <<"=== SISTEM MONITORING SUHU ===\n" ;
	cout <<"Masukan suhu : " ; cin >> a ;
	
	while (a > -1) {
		cout <<"Suhu terdeteksi : " << a << " derajat C \n" ;
		
		cout <<"Masukan suhu : " ; cin >> a ;
		
	}
	cout <<"Sistem dimatikan\n" ;
	
	return 0 ; 
}
