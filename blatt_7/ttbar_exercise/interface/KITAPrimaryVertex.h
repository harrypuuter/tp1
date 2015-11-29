#ifndef KITAPrimaryVertex_h
#define KITAPrimaryVertex_h

class KITAPrimaryVertex{
public:
    float x,y,z;
    int ntracks;
    bool isFake;
    float ndof;
    float redChi2;
    float rho, phi;
    
    float distBSp;
};

typedef std::vector<KITAPrimaryVertex> KITAPrimaryVertices;
#endif
