#include <iostream>

using namespace std;
// recursivePrint fonksiyonunu tanýmla
int recursivePrint(int input){
	//1den büyükse devreye girsin
	if (input>1){
		cout<<input << " "; //gelen sayýyý yazdýr
		return recursivePrint(input-1);// özyinelemeli fonskiyon tanýmý
}
	else//1 olursa yazdýrýp bitirsin
		cout<<"1";
		return 0;
}

int main(){
	
	int input;
	cout << "Lutfen bir sayi giriniz ";
	cin >> input;//kullanýcýdan sayý al
	recursivePrint(input);//fonksiyona gönder
	
	
	
	
	return 0;
}
