#include <iostream>
#include <vector>
using namespace std;
int main(){
	int i,input,toplam=0;
	//vector tanýmla
	vector <int> Storage,ikili;
	// sonsuz sayý isteme döngüsü
	while(true){
		//sayý iste
		cout<<"Lütfen bir sayý giriniz (Bitirmek icin -1)"<<endl;
		//sayýyý input'a kaydet
		cin>>input;
		//input'u storage'a ekle
		Storage.push_back(input);
		//-1 girildiðinde bitir
		if(input==-1)
			break;
	}
	//son deðeri sil
	Storage.pop_back();
	//degerleri yazdýr,topla
	for(i=0;i<Storage.size();i++){
		//yazdýr
		cout<<Storage[i]<<" ";
		//topla
		toplam+=Storage[i];
	}
	//toplamý yazdýr
	cout <<endl<<toplam<<endl;
	//yeni vektörü olustur
	for(i=0;i<10;i++){
		ikili.push_back(2);
	}
	//ikili vektörünü yazdýr
	for(i=0;i<10;i++){
		cout<<ikili[i];
	}
	
	
	
	
	
	
	
	return 0;
}
