#ifndef KITAINTERPRETATION
#define KITAINTERPRATATION
#include <vector>

#include "interface/KITA4Vector.h"
#include "interface/KITAObject.h"

//class TObject;

class KITAInterpretation : public KITAObject
{
public:
	
	KITAInterpretation();
	~KITAInterpretation();
	KITA4Vector p4BLepRec;
	KITA4Vector p4BHadRec;
	KITA4Vector p4Q1HadRec;
	KITA4Vector p4Q2HadRec;
	KITA4Vector p4LepRec;
	KITA4Vector p4NuRec;
	KITA4Vector p4TopLepRec;
	KITA4Vector p4TopHadRec;
	KITA4Vector p4WLepRec;
	KITA4Vector p4WHadRec;
	KITA4Vector MET;

	//vector<KITA4Vector> jets;

	double chi2;
	double dR;
	double m3;
};

KITAInterpretation::KITAInterpretation(){};

KITAInterpretation::~KITAInterpretation()
{};






#endif	
