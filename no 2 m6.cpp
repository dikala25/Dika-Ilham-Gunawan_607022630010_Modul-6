#include <iostream>
using namespace std ;

int main () {
	int setor,target,total ;
	
	while (total < 1000000) {
	
	cout <<"Setoran tabungan hari ini : " ; cin >> setor ;
	 total = setor + total ;
	
	if (total >= 1000000) {
		cout << "Target tercapai!!! : Saldo anda " << total << endl ;
		
	} else {
        cout <<"Hari ini anda menabung sebesar : " << total << endl ;
	}
}
return 0 ;
}
