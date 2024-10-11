#include <iostream>

using namespace std;


class Line{
	public:
		//constructor
		Line(){
			lenght=6;
		}
		//çaðýrma
		int read(){
			return lenght;
		}
		//deðiþtirme
		int write(int input){
			lenght = input;
		}
	private:
		int lenght;
	
};

int main(){
	
	Line l1;
	cout <<"default deger: "<< l1.read()<<endl;
	l1.write(15);
	cout << "degismis deger: " << l1.read()<<endl;
	
	
	return 0;
}
