//#include<iostream>
//using namespace std;
//
//class triangle{
//friend istream&operator>>(istream&o,triangle&obj);
//friend ostream&operator<<(ostream&,triangle&);
//	int arr[3];
//	public:
//		triangle()
//		{
//		  for(int i=0;i<3;i++)
//		  arr[i]=0;	
//		}
//		void sort()
//		{
//			int i, j;
//    for (i = 0; i < 2; i++)
//    for (j = 0; j < 3 - i - 1; j++)
//        if (arr[j] > arr[j + 1])
//        swap(arr[j], arr[j + 1]);
//    }
//    
//bool operator==(const triangle&obj)
//{
//	for(int i=0;i<3;i++)
//	{
//	if(obj.arr[i]!=arr[i])
//	return false;
//    }
//	return true;
//	
//}	
//};
//
//istream&operator>>(istream&o,triangle&obj)
//{
//	for(int i=0;i<3;i++)
//	o>>obj.arr[i];
//	return o;
//}
//ostream&operator<<(ostream&o, triangle&obj)
//{
//	for(int i=0;i<3;i++)
//	o<<obj.arr[i]<<",";
//	return o;
//}
//int main()
//{
//	int count=0;
//	int n=0;
//	cout<<"enter size:"<<endl;
//	cin>>n;
//	triangle *temp;
//	temp=new triangle[n];
//	for(int i=0;i<n;i++)
//	{ 
//	    cout<<"enter triangle  "<<i+1<<":"<<endl;
//		cin>>temp[i];
//		temp[i].sort();
//	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<"triangle  "<<i+1<<"  is:"<<endl;
//		cout<<temp[i];
//	    cout<<endl;
//	}
//	for(int i=0;i<n-1;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(temp[i]==temp[j])
//			count++;
//		}
//	}
//		int no_of_triangles=n-count;
//		cout<<"distinct triangles are:"<<endl;
//		cout<<no_of_triangles;
//		system("pause");
//		
//	return 0;
//	
//}