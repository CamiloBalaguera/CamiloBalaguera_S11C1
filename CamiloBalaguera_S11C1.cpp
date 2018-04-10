#include <iostream>
using namespace std;

const int n = 100;
int N = 771;
double ti = 0.0;
double tf = 100.0;
double S[n];
double I[n];
double t[n];
double h = (tf-ti)/n;
int diferencial(double Beta, double Gamma); 

int main()
{
	diferencial(0.0022, 0.45);
	cout << "Caso 1" << "," << "tiempo I_max(dias):" << t[n-1] << endl;
	diferencial(0.001, 0.2);
	cout << "Caso 2" << "," << "tiempo I_max(dias):" << t[n-1] << endl;
	return 0;
}

int diferencial(double Beta, double Gamma)
{
	S[0] = 770;
	I[0] = 1;
	for (int i = 1; i < n; i++)
	{
		if (I[i-1] <= N-1)
		{ 
			t[i] = i*h;
			S[i] = -h*Beta*I[i-1]*S[i-1] + S[i-1];
			I[i] = h*((Beta*I[i-1]*S[i-1]) - (Gamma*I[i-1])) + I[i-1];
			cout << t[i] << " " << S[i] << " " << I[i] << endl;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

