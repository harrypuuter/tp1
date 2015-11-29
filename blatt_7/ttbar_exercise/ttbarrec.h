#include <iostream>
#include "interface/KITA4Vector.h"
#include "TMath.h" 

using namespace std;

double calcNuPz(KITA4Vector lep, KITA4Vector misET)
{

double pz1,pz2=0;
double mW=80.4;

double mu = ((mW*mW)/2) + lep.Px()*misET.Px()+ lep.Py()*misET.Py();
double a = (mu*lep.Pz())/(lep.Pt()*lep.Pt());
double a2 = pow(a,2);

double b = (lep.E()*lep.E()*misET.Pt()*misET.Pt() - mu*mu)/(lep.Pt()*lep.Pt());


if(a2<b) //use only real part
{
	return a;
}
else
{
	pz1=a+sqrt(a2-b);
	pz2=a-sqrt(a2-b);
	
	if(abs(pz1) <= abs(pz2)) //take that one with the smaller absolut value
		return pz1;
	else
		return pz2;



}
}
