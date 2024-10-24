#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<char> s;
	string str;
	cin >> str;
	int i=0;
	bool flag = false;
	while (i<str.length()){
		if(str[i]=='{'){		
			s.push(str[i]);
		}
		else if(str[i]=='}'){
			if(! s.empty()){
				s.pop();
			}
			else{
				flag = true;
				break;
			}
		}
		i++;
	}	
	
	if(!flag && s.empty())
		cout<<"Dengeli Parantez";
	else
		cout<<"Parantez dengeli degil";	
	



	return 0;

}
