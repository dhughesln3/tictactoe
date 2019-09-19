//requires Random1.cpp

#include <iostream>
#include <cmath>
#include "Random1.h"
using namespace std;
double SimpleMonteCarlo1(double Expiry, double Strike, double Spot, double Vol, double r, unsigned long NumberofPaths)
{
	double Variance = Vol*Vol*Expiry;
	double rootVariance = sqrt(Variance);
	double itoCorrection = -0.5*Variance;
	
	double movedSpot = Spot*exp(r*Expiry + itoCorrection);
	double thisSpot;
	double RunningSum = 0;
	
	for (unsigned long i=0; i < NumberofPaths; i++)
	{
		double thisGaussian  = GetOneGaussianByBoxMuller();
		thisSpot = movedSpot*exp(rootVariance*thisGaussian);
		double thisPayoff = thisSpot - Strike;
		thisPayoff = thisPayoff>0 ? thisPayoff : 0;
		RunningSum += thisPayoff;
	}
	
	double mean = RunningSum / NumberofPaths;
	mean *= exp(-r*Expiry);
	return mean;
}

int main()
{
	
	string option;
	double Expiry;
	double Strike;
	double Spot;
	double Vol;
	double r;
	unsigned long NumberofPaths;
	
	
	cout << "\nEnter option type\nPut\nCall\n";
	cin >> option;
	
	cout << "\nEnter expiry\n";
	cin >> Expiry;
	
	cout << "\nEnter strike\n";
	cin >> Strike;
	
	cout << "\nEnter spot\n";
	cin >> Spot;
	
	cout << "\nEnter vol\n";
	cin >> Vol;
	
	cout << "\nEnter r\n";
	cin >> r;
	
	cout << "\nEnter number of paths\n";
	cin >> NumberofPaths;
	
	double Call = SimpleMonteCarlo1(Expiry,
									  Strike,
									  Spot,
									  Vol,
									  r,
									  NumberofPaths);
	double Forward = Spot - Strike*exp(-r*Expiry);
	double Put = Call - Forward;
	
	if (option == "Call"){							  
	cout << "The price is " << Call << "\n";
	}
	else if (option == "Put")
	{
		cout << "The price is" << Put << "\n";
	}
	else
	{
		cout << "Invalid option choice.";
	}
	double tmp;
	cin >> tmp;
	
	return 0;
}