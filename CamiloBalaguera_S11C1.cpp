#include <iostream>
using namespace std;

const int n = 1000;
int N = 771;
double ti = 0.0;
double tf = 50.0;
double S[n];
double I[n];
double t[n];
double h = (tf-ti)/n;
int diferencial(double Beta, double Gamma, int Caso); 
int diferencial2(double Beta, double Gamma, int Caso); 
int busqueda(double* lista);

int main()
{
	diferencial(0.0022, 0.45, 1);
	diferencial(0.001, 0.2, 2);
	diferencial2(0.0022, 0.45, 1);
	diferencial2(0.001, 0.2, 2);
	return 0;
}

int diferencial(double Beta, double Gamma, int Caso )
{
	S[0] = 770;
	I[0] = 1;
	double maximo = 0.0;
	double infect = 0.0;
	for (int i = 1; i < n; i++)
	{
		if (I[i-1] <= N) 
		{ 
			t[i] = i*h;
			S[i] = -h*Beta*I[i-1]*S[i-1] + S[i-1];
			I[i] = h*((Beta*I[i-1]*S[i-1]) - (Gamma*I[i-1])) + I[i-1];
			cout << t[i] << " " << S[i] << " " << I[i] << endl;
		}
	}
	return 1;
}

int diferencial2(double Beta, double Gamma, int Caso )
{
	S[0] = 770;
	I[0] = 1;
	double maximo = 0.0;
	double infect = 0.0;
	for (int i = 1; i < n; i++)
	{
		if (I[i-1] <= N) 
		{ 
			t[i] = i*h;
			S[i] = -h*Beta*I[i-1]*S[i-1] + S[i-1];
			I[i] = h*((Beta*I[i-1]*S[i-1]) - (Gamma*I[i-1])) + I[i-1];
			if (I[i] > infect)
			{
				infect = I[i];
				maximo = t[i];
			}
		}
		else
		{
			return 0;
		}
	}
	cout << "Caso " << Caso << "," << "tiempo I_max(dias):" << maximo << endl;
	return 1;
}


