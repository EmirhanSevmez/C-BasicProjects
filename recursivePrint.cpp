#include <iostream>

using namespace std;
// recursivePrint fonksiyonunu tan�mla
int recursivePrint(int input){
	//1den b�y�kse devreye girsin
	if (input>1){
		cout<<input << " "; //gelen say�y� yazd�r
		return recursivePrint(input-1);// �zyinelemeli fonskiyon tan�m�
}
	else//1 olursa yazd�r�p bitirsin
		cout<<"1";
		return 0;
}

int main(){
	
	int input;
	cout << "Lutfen bir sayi giriniz ";
	cin >> input;//kullan�c�dan say� al
	recursivePrint(input);//fonksiyona g�nder
	
	
	
	
	return 0;
}
