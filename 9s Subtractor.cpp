/* MUHAMMAD HAYYAN
 23I-2041____CY-A
 Assignment#03___Q3 */
 
#include<iostream>
using namespace std;

int main()
{
		//Program to subtract two 6 digit numbers using 9's complement
	int num1, num2, complement, temp_result, final_result, carry;
	
	cout<<"\nEnter first number:\t";
	cin>> num1;
	cout<<"\nEnter second number:\t";
	cin>> num2;
	
	if (num1 > num2)			//Condition if first number is greater
	{
		
			//Finding 9s complemet of second digit
		complement = 999999 - num2;
			
			//Adding 9s complement and first num
		temp_result = complement + num1;
				
			//finding carry (leftmost digit)
		carry = temp_result/1000000;
				
			//final result			
		final_result = carry + (temp_result%1000000);
	}
	else 					//Condition if second number is greater
	{
			//Finding 9s complemet of second digit
		complement = 999999 - num1;
			
			//Adding 9s complement and first num
		temp_result = complement + num2;
				
			//finding carry (leftmost digit)
		carry = temp_result/1000000;
				
			//final result			
		final_result = carry + (temp_result%1000000);
	
	}
	
	
	
		//outputting final result
		
	if (num1 > num2)			//Condition if first number is greater
	{
		cout<< "\nUsing 9's complemet:";
		cout<< "\n\n"<<num1<<" - "<<num2<< " =  "<<final_result<<endl;
	}
	else					//Condition if second number is greater
	{		
		cout<< "\nUsing 9's complemet:";
		cout<< "\n\n"<<num1<<" - "<<num2<< " =  -"<<final_result<<endl;
	}
	return 0;
}
		
	
