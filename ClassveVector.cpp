#include <iostream>
#include <vector>
using namespace std;

class MyClass{
	public:
		//constructor
		MyClass(int value):value(value) {}
		//yazdýrma fonksiyonu
		void display(){
			cout<<"Value: "<<value<<endl;
		}
	private:
		int value;
};




int main(){
	int i;
	//vector olustur
	vector <MyClass> myVector;
	//myclass nesnelerini ekle
	myVector.push_back(MyClass(10));
	myVector.push_back(MyClass(20));
	myVector.insert(myVector.begin(),MyClass(35));
	myVector.pop_back();
	for(i=0;i<myVector.size();i++){
		myVector[i].display();
	}
		
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
