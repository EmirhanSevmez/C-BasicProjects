#include <iostream>

using namespace std;

class Adder{
	public:
	// const fonksiyonunu oluþtur
	Adder(int i=0){
		total = i;//total=0
		
	}
	//toplama fonksiyonu
	void addNum(int number){
		total+=number;
	}
	//yazdir fonksiyonu
	void printValue(){
		cout << total;
		
	}
	private:
		int total;
		
};

int main(){
	
	int input=0;
	Adder A1;
	
	cout << "Toplama uygulamasina hos geldiniz lutfen sayi giriniz. Bitirmek icin negatif deger"<<endl;
	// negatif deger alana kadar dongü
	while (input>=0){
		//kullanýcýdan input
		cin >> input;
		// eklendigini gösteren yazý
		cout << input << " ekleniyor..."<<endl;
		// ekle
		A1.addNum(input);
		//yazdir
		A1.printValue();
		cout<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
