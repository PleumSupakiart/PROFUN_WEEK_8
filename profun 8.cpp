#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

struct NUM
{
	int x;	  
};

void Average(int*);
int main()
{
	struct NUM open;
	int num;
	
	cout << "Enter quantity number : ";
	cin >> num;	
	int number[num];
	open.x = num;
	Average (&open.x);
	
	return 0;
}

void Average(int *a)
{
	float number[*a];
	float sum = 0;
	for (int i=0 ; i < *a ; i++)
	{
		cout << i+1 << ") "; 
		cin >> number[i];
		sum += number[i];
	}
	printf("Average is %.3f/%d = %.3f \n",sum,*a,sum/ *a);
	
		float max,min;
	min = number[0];
	max = number[1];
	
	for(int j=0;j<*a;j++)
	{
		if(min>number[j])
			{
				min = number[j];
			}
		else if (max<number[j])
			{
				max=number[j];
			}
			
	}
	cout << "Max = " << max << endl;
	cout << "Min = "<< min << endl;
}
