// ch6.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include "time.h"
#include "math.h"
using namespace std;
#define PI 3.14159
#define E 2.718281828
//int add(int a, int b)
//{	
//	return a+b;
//string add(string a, string b)
//{
//	return a+b;
//}
//static int total = 0;
//void GetData(string name)
//{
//	static int n = 0;
//	n++;
//	cout << "no" << n <<  "people is:" << name <<endl;
//	total++;
//}
int _tmain(int argc, _TCHAR* argv[])
{
	//unsigned seed = (unsigned) time(NULL);
	//srand(seed);
	//char str[2];
	//for(;;)
	//{	
	//	cin.getline(str,2);
	//	if(str[0]=='\0')
	//	{	
	//		cout<<"end"<<endl;
	//		break;
	//	}
	//	else
	//	{
	//		cout << 10+rand()%91<<endl;
	//	}
	//
	//	
	//}
	cout << abs(-12) << endl;
	cout << pow(2.0,3.0) << endl;
	cout << sqrt(144.0)<< endl;
	cout << max(19,3)<< endl;
	cout << min(1.1,1.5)<<endl;

	cout << log10(1000.0) <<endl;
	cout << exp(2.0) <<endl;
	cout << log(E) <<endl;
	cout << asin(0.5) <<endl;
	cout << cos(PI/3) <<endl;
	char a[] = "First";
	char *b ="Second";
	char c[20];

	int len = strlen(a);
	cout << len << endl;
	strcpy_s(c,len+1,a);
	int n = strcmp(b,a);
	cout << n <<endl;
	strcat_s(c,20,b);
	cout << c <<endl;
	struct tm t1,t2;
	int z =123;
	char buffer[10];
	string s1 = itoa(z,buffer,10);
	cout << buffer <<endl;
	int x,total;
	cin >> x;
	cout << x <<endl;
	total=0;
	for (int i = 1; i<=x;i++)
		total+=i;
	cout<<total<<endl;

	system("pause");
	return 0;
}
