//2019-4-41
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, * p;//* p��Ұָ�룬����err
//	i = 10;
//	*p = 1;	//* ָ�벻�ܸ�ֵ��Ҫ������
//	cout << *p << endl;
//	return 0;
//}



//2019-4-42
//#include<iostream>
//using namespace std;
//class Test
//{
//	int x, y;
//public:
//	fun(int i, int j)	//����û�д�Ĭ��ֵ(��ʼ��)
// {
//		x = i;
//		y = j;
//	}
//	show(){
//		cout << "x=" << x;
//		if (y)cout << ",y = " << endl;
//		cout << endl;
//	}
//};
//int main(){
//	Test a;
//	a.fun(1);	
//	a.show();
//	a.fun(2, 4);	
//	a.show();
//	return 0;
//}



//2019-4-43
//����������Ϊpublic,class
//#include<iostream>
//using namespace std;
//void main()
//{
//	char* a[5] = { "new","class","double","main","public" };
//	char* p1, * p2;
//	p1 = p2 = a[0];
//	for (int i = 0; i < 5; i++)
//	{
//		//* if(strcmp(a[i],p1)>0)p1 = a[i];
//		if (strcmp(a[i], p1) < 0)p1 = a[i];
//		if (strcmp(a[i], p2) < 0)p2 = a[i];
//		cout << p1 << ',' << p2 << endl;
//	}
//}


//2019-4-44
//#include<iostream>
//using namespace std;
//class CTest
//{
//private:
//	int x;
//public:
//	CTest(int x)
//	{
//		this->x = x;
//	}
//	int getX()
//	{
//		return x;
//	}
//};
//int main()
//{
//	const CTest obj(5);
//	cout << obj.getX << () << endl;
//		//*���������ܵ��÷ǳ�������ĺ���
//	return 0;
//}

//2019-4-45
//#include<iostream>
//using namespace std;
//class Complex {
//public:
//	Complex(float = 0, float = 0)//�βδ���ֵ�����λ����¸�ֵ
//	{
//		real = r; imag = i;		//δ��ʼ��
//	}
//	void print()
//	{
//		cout << '(' < real << ',' << imag ')' <<endl;
//	}
//private:
//	float real, imag;
//};
//int main()
//{
//Complex a(2.2f, 4.4f);
//a.print();
//cout << float(a) * 0.5 << endl;//��֧��
//return 0;
//}

//2019-4-46
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 6; i++)
//	{
//		if (i % 3)	cout << "*";	//	3/6%3==0(��),����,ִ��4/5==1/2���棩,��ӡ
//		else continue;
//		cout << "$";
//	}
//	cout << "#" << endl;
//
//	return 0;
//}



//2019-4-47
// ����
//#include<iostream>
//using namespace std;
//class BASE
//{
//public:
//	~BASE()
//	{
//		DERIVED d;
//
//	};
//	class DERIVED :public BASE
//	{
//	public:
//		~DERIVED()
//		{
//			cout << "DERIVED";
//		}
//	};
//};
//int main()
//{
//	cout << "BASE";
//
//	return 0;
//}

//2019-4-48
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char a = 0;
//	int i = 32;
//	cin >> a;
//	if ((a >= 'A') && (a <= 'Z'));
//	a = a + i;
//	cout << a << endl;
//	return 0;
//}


//2019-4-49
//#include<iostream>
//using namespace std;
//int main() {
//	int max(int a, int b, int c = 0);
//	int a, b, c, m1, m2;
//	cin >> a >> b >> c;
//
//	//
//	m1 = max(a, b, c);
//	//
//
//	m2 = max(a, b);
//	cout << "a,b,c�����������е������Ϊ:" << m1 << endl;
//	cout << "a,b�����������е������Ϊ:" << m2 << endl;
//	return 0;
//}
//int max(int a, int b, int c)
//{
//	if (b > a)
//		a = b;
//
//	//
//	if (c > a)
//		a = c;
//	//
//
//	return a;
//}





//2019-4-50
#include<iostream>
#include<string>
using namespace std;

class str
{
private:
	char* st;
public:
	str(char* a)
	{
		set(a);
	}

	//
	str& operator = (str& a )
	//
	
	{
		delete st;
		set(a.st);
		return *this;
	}
	void show()
	{
		cout << st << endl;
	}
	~str()
	{
		delete st;
	}
	void set(char* s)//��ʼ��st
	{
		//
		st = new char[strlen(s) + 1];
		//

		strcpy(st, s);
	}
};

void main()
{
	str s1("he"), s2("she");
	s1.show(), s2.show();
	s2 = s1;
	s1.show(), s2.show();
}