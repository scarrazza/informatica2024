/*
  Esercizio: Integrazione
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;

/**
 * Calcola funzione gaussiana
 */
double gauss(double x)
{
  return 1 / sqrt(2*M_PI) * exp(-x*x/2);
}

double integrate_gaussian(double a, double b, int n)
{
  double area = 0;
  double d = (b-a)/n;
  for (int i = 0; i < n; i++)
    area += (gauss(a + i*d) + gauss(a + (i+1)*d)) / 2;
  return d * area;
}

int main()
{
  // calcolo l'integrale
  cout << "n = 100" << endl;
  cout << integrate_gaussian(-10, 10, 100) << endl;
  cout << integrate_gaussian(-1, 1, 100) << endl;
  
  cout << "n = 10" << endl;
  cout << integrate_gaussian(-10, 10, 10) << endl;
  cout << integrate_gaussian(-1, 1, 10) << endl;

  return 0;
}
