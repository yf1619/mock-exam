#include"series.hpp"

#include<iostream>

using namespace std;
/* 'virtual double evaluate_truncated(double x, int n)' is in the series, so if i need to use this funcion,so 
I need to inherited firstly*/
class print_approximation
      :public series
{
public:
	double x;//the input from the stdin//
	cin >> x;
	

}