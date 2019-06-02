#include<iostream>
using namespace std;
template<typename typ>
class Suma
{
	public:
		typ a;
		typ b;
		Suma(typ a , typ b)
		{
			this->a = a;
			this->b=b;
		}
		typ Dodaj()
		{
			return a + b;
		}
};
int main()
{
	Suma<double> *dosumy=new Suma<double>(5.5,3.2);
	cout<<dosumy->Dodaj();
}
