#include <iostream>
#include <string>
using namespace std;

struct Dog
{
	string Name;
	float year;
	void YouDogHealth();
};

enum DogYear
{
	D_Young=2,
	D_Health=5,
	D_Old=10
};

int main()
{
	Dog D_to;
	DogYear D_Y = D_Young;
	switch (D_Y)
	{
	case D_Young:
		cout << "��Ĺ�������" << endl;
		break;
	case D_Health:
		cout << "��Ĺ����ܽ���" << endl;
		break;
	case D_Old:
		cout << "��Ĺ��Ѿ�����" << endl;
		break;
	default:
		break;
	}




}





