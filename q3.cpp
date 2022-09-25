#include<iostream>
using namespace std;
class decimal{
	float n;
	friend istream&operator>>(istream&o,decimal&n);
	friend ostream&operator<<(ostream&o,decimal&n);
	
	public:
		decimal()
		{
			n=0.0;
		}
		decimal operator++()
		{
			n=n+1;
			return *this;
			
		}
		decimal operator++(int a)
		{
		   n=n + 0.1;
		   return *this;
			
		}
};
istream&operator>>(istream&o,decimal&n)
{
	o>>n.n;
	return o;
}
ostream&operator<<(ostream&o,decimal&n)
{
	o<<n.n;
	return o;
}
int main()
{
	decimal temp;
	cin>>temp;
	cout<<"temp:\n";
	cout<<temp;
	++temp;
	cout<<"\n++temp:\n";
	cout<<temp;
	temp++;
	cout<<"\ntemp++:\n";
	cout<<temp;
	
}