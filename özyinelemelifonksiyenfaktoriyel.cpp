#include <iostream>

using namespace std;
//faktoriyel fonksiyonu
int faktoriyel(int n){
	if (n==1){  //1 olursa dur
		return 1;
	}
	else//özyinelemeli fonksiyon
		return n*faktoriyel(n-1);
}


int main(){
	cout<<"5'in faktoriyeli: "<<faktoriyel(5)<<endl<<"6'nin faktoriyeli: "<<faktoriyel(6)<<endl<<"12'nin faktoriyeli: "<<faktoriyel(12)<<endl;
	return 0;
	
	
	
	
	
	
}
