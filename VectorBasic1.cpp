#include <iostream>
#include <vector>
using namespace std;
int main(){
	int i;
	//numbers vectoru tanımla
	vector <int> numbers;
	//icindeki sayılari gir
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	//2. indeksine 15 ekle
	numbers.insert(numbers.begin()+1,15);
	//3.elemanı sil
	numbers.erase(numbers.begin()+2);
	//hepsini yazdır
	for(i=0;i<numbers.size();i++){
		cout<<numbers[i]<<" ";
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
