//COMSC110
//Mariam Sharaf
//Assignment15


#include <iostream>
using namespace std;
unsigned long Sum(unsigned int n)

{
int i,Sum=0;
for(i=1;i<=n;i++)
{
Sum=Sum+i;
}
cout<<" The accumulative sum from 1 "<< "to " << n << " is: " << Sum << endl;

    return 0;
}
unsigned long Sum_recursive(unsigned int n)

{
if(n==1)
return n;
else
return n+Sum_recursive(n-1);

}

int main()

{
int n,x;
cout<<"**This program will find the accumulative sum of a number**"<< endl;
cout<< endl;
cout<<"Enter one non-negative number: ";
cin>> n;
while(n<=0)
{
cout<< " Invalid number."<< endl;
cout<< " Please enter a number greater than 1: ";
cin>>n;
}
cout<< "Calculate the result from the function using loop"<< endl;
Sum(n);
x=Sum_recursive(n);
cout<< "Calculate the result from a recursive function"<< endl;

cout<< " The accumulative sum from 1 to " << n << " is, " << x << endl;
return 0;

}
