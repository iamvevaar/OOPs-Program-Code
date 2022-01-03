#include<iostream>
#include<stdio.h>
using namespace std;
class fact{
	public:
		int num,facto,temp[10];
		fact()
		{
			int i;
			for(i=0;i<10;i++)
			temp[i]=1;
		}
		void factorial();	
	};
	void fact::factorial()
	{
		int fact=1,b,i=0;
		b=num;
		try{
			while(b!=1)
			{
				temp[i]=b;
				i++;
				b--;
				if(i>=10)
				throw i;
			}
			i=0;
			while(temp[i]!=1)
			{
				fact=fact*temp[i++];
			}
			cout<<"Factorial Of Number Is:"<<fact;
			}
			catch(int e)
			{
				cout<<"\nCaught Exception Array Index Out Of Bounds Because Of Array Limit:"<<e;
				cout<<"\nInternal Memory Is Not Sufficient To Carry Out This Operation";
			}
		}
int main()
{
	fact obj;
	cout<<"Factorial Is To Be Calculated For:";
	cin>>obj.num;
	obj.factorial();
return 0;
}
