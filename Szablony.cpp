#include<iostream>
#include<vector>
using namespace std;
template<typename typ>
class Nowa
{
	vector<typ> tablica;
	public:
	Nowa(typ x,typ y,typ z)
	{
		tablica.push_back(x);
		tablica.push_back(y);
		tablica.push_back(z);
	}
	~Nowa()
	{
		cout<<"cleaned"<<endl;
	}
	typ Max()
	{
		typ max=tablica[0];
		for(int i=1;i<tablica.size();i++)
		{
			if(tablica[i]>max)
			{
				max=tablica[i];
			}	
		}	
		return max;
	}
	void Dodaj(typ x)
	{
		tablica.push_back(x);
	}
	void Wypisz()
	{
		for(auto&i :  tablica )
		{
			cout<<i<<endl;
		}
	}
};
int main()
{
	Nowa<int>*vec=new Nowa<int>(1,2,3);
	vec->Wypisz();
	vec->Dodaj(5);
	vec->Wypisz();
	cout<<"Max   "<<vec->Max()<<endl;
	delete vec;
	return 0;
}
