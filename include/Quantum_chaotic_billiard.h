#include <iostream>
#ifndef QUANTUM_CHAOTIC_BILLIARD_H
#define QUANTUM_CHAOTIC_BILLIARD_H

using namespace std;
using namespace Eigen;

class Quantum_chaotic_billiard
{
	private:
		complex<double> _G;
		complex<double> _P;

		MatrixXcd _H;
		MatrixXcd _W;
		MatrixXcd _C1;
		MatrixXcd _C2;
		MatrixXcd _S;
	
	public:
		Quantum_chaotic_billiard(MatrixXcd H, MatrixXcd W, MatrixXcd C1, MatrixXcd C2);

		void Set_Setup(MatrixXcd H, MatrixXcd W, MatrixXcd C1, MatrixXcd C2);

		void Calculate_Smatrix();

		void Calculate_G_and_P();

		complex<double> getG();

		complex<double> getP();
};

#endif
