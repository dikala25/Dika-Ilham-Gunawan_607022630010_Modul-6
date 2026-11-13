#include <iostream>
using namespace std ;

int main () {
	int pin ;
	
	cout <<"=== Menu Login ===\n" ;
	
	while (pin != 1234) {
		
		
		for (int i = 1 ; i <= 3 ; i++) {
		
		cout <<"Masukan Pin anda : " ; cin >> pin ;
		
	    if (pin != 1234) {
	    	cout <<"Percobaan ke-"<< i <<  " : Sandi salah" ;
	    	cout <<"\n" ;
		} else {
			cout <<"Percobaan ke-"<< i << " : Sandi benar" ;
			cout <<"\n" ;
			return 0 ;
		}
	} cout <<"Kartu Terblokir \n" ; 
	return 0 ;
} 
	
}
