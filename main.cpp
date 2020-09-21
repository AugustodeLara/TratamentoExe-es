#include <iostream>
using namespace std;

class DivisaoZ
{
public:
	DivisaoZ(int n);
	void Msg();
private:
	int linha;
};

DivisaoZ::DivisaoZ(int n)
{
	linha = n;
}

void DivisaoZ::Msg()
{
	cout << "Erro na linha: " << linha << endl;

}


int main()
{
	int x, y;
	x = 10;
	y = 0;

	try
	{
		if (y == 0)
		{
			throw (DivisaoZ(__LINE__));
		}
		cout << "A divisao e = " << (float)x / y << endl;
	}
	catch (DivisaoZ T)
	{
		T.Msg();
	}

	system("pause");
	return 0;
}