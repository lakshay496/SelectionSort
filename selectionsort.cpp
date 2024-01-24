#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<bits/stdc++.h>
using namespace std;
int TC();
vector<int> Generate(int);
void SS(vector<int>,int);
int main()
{	
double t=TC();

}
void SS(vector<int>z,int num)
{
	for(int i=0;i<num;i++)
	{
		int min=i;
		for(int j=i+1;j<num;j++)
		{
		if(z[j]<z[min])
		{
			min=j;
		}	
		}
	}
}
int TC()
{   
    vector<int> Array;
    clock_t start,end;
    int i=100;
	Array=Generate(i);
	start=clock();
	for(int m=1;m<=10;m++)
    {  
        SS(Array,i);
	}
	end=clock();
	double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
	double result= time_taken/10.0;
    cout<<result<<setprecision(10);
}

vector<int> Generate(int x)
{
	vector<int>a;
	for(int j=1;j<=x;j++)
	{
		a.push_back(int(rand()%x));
	}
	return a;
}
