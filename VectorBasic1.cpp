#include <iostream>
#include <vector>
using namespace std;
int main(){
	int i;
	//numbers vectoru tan�mla
	vector <int> numbers;
	//icindeki say�lari gir
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	//2. indeksine 15 ekle
	numbers.insert(numbers.begin()+1,15);
	//3.eleman� sil
	numbers.erase(numbers.begin()+2);
	//hepsini yazd�r
	for(i=0;i<numbers.size();i++){
		cout<<numbers[i]<<" ";
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
