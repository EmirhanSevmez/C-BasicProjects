#include <iostream>

using namespace std;
//fibonacci fonksiyonu
int fibonacci(int n){
	//ilk deðerler
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n-2); // özyinelemeli fonksiyon
}

int main(){
	//test
	cout << "8'e kadar fibonacci serisi: ";
	for(int i=0;i<8;i++){
		cout <<fibonacci(i)<<" ";
	}
	
	
	
	
	
	
	
	return 0;
}
