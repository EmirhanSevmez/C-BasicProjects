#include <iostream>
#include <vector>
using namespace std;
int main(){
	int i,input,toplam=0;
	//vector tan�mla
	vector <int> Storage,ikili;
	// sonsuz say� isteme d�ng�s�
	while(true){
		//say� iste
		cout<<"L�tfen bir say� giriniz (Bitirmek icin -1)"<<endl;
		//say�y� input'a kaydet
		cin>>input;
		//input'u storage'a ekle
		Storage.push_back(input);
		//-1 girildi�inde bitir
		if(input==-1)
			break;
	}
	//son de�eri sil
	Storage.pop_back();
	//degerleri yazd�r,topla
	for(i=0;i<Storage.size();i++){
		//yazd�r
		cout<<Storage[i]<<" ";
		//topla
		toplam+=Storage[i];
	}
	//toplam� yazd�r
	cout <<endl<<toplam<<endl;
	//yeni vekt�r� olustur
	for(i=0;i<10;i++){
		ikili.push_back(2);
	}
	//ikili vekt�r�n� yazd�r
	for(i=0;i<10;i++){
		cout<<ikili[i];
	}
	
	
	
	
	
	
	
	return 0;
}
