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
		cout << "你的狗还年轻" << endl;
		break;
	case D_Health:
		cout << "你的狗还很健康" << endl;
		break;
	case D_Old:
		cout << "你的狗已经老了" << endl;
		break;
	default:
		break;
	}




}





