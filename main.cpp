#include <iostream>


using namespace std;

struct Animal{
	char nombre [20];
	int edad;
}animal1,animal2;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"Nombre: ";
	cin.getline(animal2.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>animal2.edad;
	//aniamal1.edad=10
	cout<<animal2.nombre<<endl;
	cout<<animal2.edad<<endl;
	system("pause");
	
	return 0;
}
