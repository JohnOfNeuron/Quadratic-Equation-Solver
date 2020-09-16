#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Hello there today we will be working on the next version of quadratic calculator
   signed int a,b,c;
   float d,r;
   float x1,x2;
   char ans;

int main(int argc, char** argv) {
	cout<<"Welcome to Quadratic Calculator"<<endl;
	do
	{
	
	cout<<"   a(x)^2+bx+c   "<<endl;
	cout<<"Enter the values of a, b and c in the right order."<<endl;
	cin>>a>>b>>c;

	
	d= (pow(b,2))-(4*a*c);
	
	if (d>=0)
	{
		x1= ((-b)+sqrt(d))/(2*a);
		x2= ((-b)-sqrt(d))/(2*a);
		cout<<"Solution set = {"<<x1<<","<<x2<<"}"<<endl;
	}
	else if (d<0)
	{
		r=sqrt(-d);
		cout<<"Solution set = { ("<<-b<<"+"<<r<<"i)/"<<(2*a)<<",("<<-b<<"-"<<r<<"i)/"<<(2*a)<<"}"<<endl;
	}

	else {
		cout<<"Wrong input! Please try again."<<endl;
	}
	cout<<"Do you want to begin again? Press 'y' for Yes or 'n' for No." <<endl;
    cin>>ans;

}
while ((ans=='y')&&(ans!='n'));

return 0;
}


//Now Let us compile and execute the source code
//Press F11.
