#include<iostream>
using namespace std;
class String {
	char* str;
	int l;
public:
	String();
	void print();
	int stlenth(char str[]);
	bool operator<(String&);
	bool operator==(String&);
};
int String::stlenth(char str[])
{
	int i = 0;
	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	return i;
}
bool String::operator==(String& o)
{
	int k = stlenth(o.str);
	int j = stlenth(str);
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < k; i++)
	{
		sum1 = sum1 + int(o.str[i] + i);
	}
	for (int i = 0; i < k; i++)
	{
		sum2 = sum2 + int(str[i] + i);
	}
	return (sum1 == sum2);
}
bool String::operator<(String& o)
{
	int k = stlenth(o.str);
	int j = stlenth(str);


	return (j < k);

}
String::String()
{

	str = new char[20];
	cout << "enter string" << endl;
	cin.getline(str, 20);
}
void String::print()
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		cout << *(str + i);
	}
	 
}
int main()
{
	String s1, s2;
	if ((s1 < s2)&& !(s1 == s2))
	{
		s1.print();
		cout << " smaller to ";
		s2.print();
		cout << endl;
		s1.print();
		cout << " not equal to ";
		s2.print();
		cout << endl;
	}
	else if (s1 == s2)
	{
		s1.print();
		cout << " equal to ";
		s2.print();
		cout << endl;
	}
	else{
	s1.print();
		cout << " not equal to and greater than ";
		s2.print();
		cout << endl;
	}
	

	system("pause");
	return 0;
}