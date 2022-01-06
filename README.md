# Schrödinger's Billiard

Hello! My name is Rafael and in this repository I perform numerical simulations to calculate properties of electrical transport in quantum billiards such as conductance, power shot noise, concurrence, the entanglement of formation, and violations of Bell's inequality. All of the results of this repository can be found in the jupyter notebook's files of the directory "/WignerDyson/Data_Analysis". Since some concepts of this work are a little hard to understand, I will cover some definitions and show their respective introduction reference.

## Introduction

The quantum billiards, also known as quantum dots, are extremely small devices about a few nanometers in which the electrons are carried by leads and scattered in a chaotic cavity, as we can see in Figure 1 [[1]](#1). Experimentally, physicists can build a two-dimensional electron gas at the interface between gallium-arsenide (GaAs) and aluminum-gallium-arsenide (AlGaAs) by a technique called molecular beam epitaxy. They use electrodes (gray area of Figure 1) to create barriers that confine the electrons in a small region.

<p align="center" width="100%">
  Figure 1<br>
    <img width="33%" src="https://user-images.githubusercontent.com/53999015/147526090-b1b1aee2-08b4-4cdb-9cae-a5959e1b25d7.gif">
</p>

The quantum billiard of this repository is called Schrödinger billiard because the electron's behavior is described by his equation (Schrödinger equation). The quantum mechanics theory shows us that an electron confined in a small region can only access discrete energies, which are the solutions of the Schrödinger equation. Therefore, the best way to describe the discreteness of these systems is using a matrix approach, instead of continuous variables. So the Hamiltonian is a matrix M x M, where M is the number of energies available inside the cavity, and the coupling matrix "W" between cavity and lead is a matrix with dimension M x N, where N is the number of energies available in the leads.

In this work, the billiard is considered chaotic in the sense that small changes in the initial conditions can drastically change the trajectory of the particle in the classical limit. Experimentally, this can be achieved by changing the shape of the cavity. The chaos and the transport of electrons in this billiard are simulated by Random-Matrix Theory (RMT). This theory of quantum transport has a lot of details and here I just give a brief overview of this project. However, reference [[2]](#2) is the standard guide for this topic. 

## Conductance

**In this repository**, I analyze the influence of the three fundamental symmetries (GOE, GUE, GSE) in the conductance of electrons inside a quantum billiard. I obtain the distributions of conductance, as well as the average and variance in terms of the number of open channels for each class of symmetry. I also perform simulations to see how the conductance of each class of symmetry depends on the barrier between the lead and chaotic cavity, where it is related to the transparency of the barrier Γ. Moreover, we analyze the weak localization correction of conductance as a function of the barrier's transparency Γ. 

The property which quantifies the number of electrons that can pass through the quantum billiard is called quantum conductance. This property is directly related to the probability of an electron going from a lead to the other due to the wave-particle duality of the electron. Moreover, the conductance fluctuates around an average and it has a specific variance, this fact is known as universal fluctuations of conductance. The mean, variance and skewness of the distribution of conductance depend on the number of open channels in each lead, the potential barrier between the lead and the chaotic resonance cavity and especially the class of symmetry of the hamiltonian. In Figure 2, I plot the conductance of the first 200 realizations for each number of open channels (N) in the leads generated by monte carlo simulation. In each step, I generate a random hamiltonian to calculate the scattering matrix "S" by Mahaux-Weidenmuller formula and the conductance "G" by Landauer-Buttiker formula.

<p align="center" width="100%">
  Figure 2<br>
    <img width="60%" src="https://user-images.githubusercontent.com/53999015/146303088-65fac1ac-5f96-42c4-9b59-6736cf3f6de1.png">
</p>

As we can see in this figure, the distribution of realizations of conductance depends on the number of open channels but also on the β which indicates a specific symmetry of the hamiltonian. These symmetries are fundamentals to describe the physics of quantum billiards. In a Schrödinger billiard, there are three fundamental symmetries which are listed below:

#### Gaussian Orthogonal Ensemble (GOE)
The index β = 1 (blue), also indicated in the literature by "AI", represents a system that has time-reversal symmetry (TRS) and spin rotational symmetry (SRS). The Hamiltonian of this system has to be a real-symmetric matrix.
#### Gaussian Unitary Ensemble (GUE)
The β = 2 (red), also indicated by literature as "A", represents a system that the TRS is broken. This happens when there is a magnetic field applied in the quantum dot, the magnetic field breaks the time-reversal symmetry. When the TRS is broken, it doesn't matter if SRS is preserved or broken. In this case, each element of the Hamiltonian is a complex number.
#### Gaussian Symplectic Ensemble (GSE)
The β = 4 (green), indicated by literature as "AII", represents a system that SRS is broken but TRS is preserved. In this case, the Hamiltonian has a quaternionic structure. In these systems, there is a special interaction called spin-orbit coupling that arises due to the relation between the apparent magnetic field seen from the electron perspective and the magnetic moment of the electron associated with its intrinsic spin. 

## Shot-Noise Power

**In this repository**, I perform numerical simulations of shot-noise power, also known as the spectral density of the noise. In the same way as the conductance, I analyze the influence of the GOE, GUE, and GSE ensembles on the distributions of shot-noise power, as well as the average and variance. I also explore the dependence of shot-noise power with the number of open channels and the barrier's transparency Γ, recovering some results of the literature. The shot-noise produced by scattered electrons in a chaotic cavity can be used to indicate the presence of entangled electron pairs by violations of Bell's inequality.

One of the founding fathers of mesoscopic physics Rolf Landauer once said: "The noise is the signal". Since then physicists have turned their attention to noise measurements. In mesoscopic physics, the shot noise is the fluctuations in time of the current's measurements due to the discreteness of the electrical charge. In Figure 3 we see a setup that measures the current and its respective noise when a constant bias voltage is applied to a conductor. The current noise is evaluated by using a spectral analyzer [[3]](#3).

<p align="center" width="100%">
  Figure 3<br>
    <img width="50%" src="https://user-images.githubusercontent.com/53999015/146485017-2cc05951-1ad3-4fec-8768-66c1a83a6082.png">
</p>

To understand more about shot noise and how we calculate it in a quantum system, I recommend reference [[3]](#3).

## Concurrence and Entanglement of Formation

**In this repository**, I analyze the influence of the time-reversal symmetry in the concurrence and entanglement of formation for the Schrödinger billiard. So I study the concurrence and entanglement of formation produced in the orbitals degree of freedom and compare this production of entangled states when the time-reversal symmetry is broken or preserved. I obtain the distributions of concurrence and entanglement of formation, as well as the average and variance in terms of the barrier's transparency Γ, always recovering some results from the literature [[4]](#4).

The concurrence is a property that quantifies the degree of entanglement of a system [[5]](#5) and can be viewed as how much a state of the system can be separated in two states from different subsystems. In this quantum billiards setup, we treat left and right leads as two subsystems and our goal is to entangle the left lead's electrons with the right lead's one. In Schrödinger billiard, when two electrons are entangled their orbital degree of freedom can not be viewed as two separate states, so after the scatter we have a global state that describes the whole system. If the value of the concurrence is equal to 1 (0), then we have a Bell state (non-entangled state). If the concurrence is any value between 0 and 1, we say that the state is non-separable.

The entanglement of formation connects the concept of entanglement with the entropy of information theory. The physical meaning of entanglement of formation is the resource cost needed to prepare a given entangled state [[6]](#6). Let's suppose that Alice and Bob (left and right leads) want to create a state M without transferring quantum states between them, they need to share previous information E(M) of pure singlets to create this state M. In the same way as concurrence, we say that the state with entanglement of formation 1 (0) is a Bell state (non-entangled state). 

## Violations of Bell-CHSH Inequality

**In this repository**, I perform numerical simulations of Bell's parameter to obtain violations of the CHSH inequality in Schrödinger billiard. The reference [[7]](#7) shows the relation between correlators of the current fluctuations and the Bell-CHSH inequality. So I study the dependence of the violations of Bell's parameter on the number of resonances and the transparency of the barrier Γ. I also explore the relation between the maximal violation of Bell's inequality and the concurrence [[8]](#8).

Bell's inequality was a remarkable step in understanding the nature of quantum physics. In 1964, John Bell proposed an inequality that checks whether quantum physics is a real and local theory [[9]](#9), motivated by the EPR paradox. Violations of this inequality show that hidden-variable theories can not predict some correlations of quantum mechanics. For violate Bell's inequality, the experimentals have to exclude any possible communication between the two subsystems (locality loophole), and guaranteeing efficient measurement (detection loophole). In 2015, physicists used electron's spins separated by 1.3 kilometres to violate Bell's inequality free of loop-holes [[10]](#10).

## References
<a id="1">[1]</a>
M. J. Berry, J. A. Katine, R. M. Westervelt, and A. C. Gossard, Phys. Rev. B 50, 17721 (1994).

<a id="2">[2]</a>
C. W. J. Beenakker, Rev. Mod. Phys. 69, 731 – Published 1 July 1997

<a id="3">[3]</a>
Shot Noise in Mesoscopic Systems: From Single Particles to Quantum Liquids
Kensuke Kobayashi, Masayuki Hashisaka
Journal of the Physical Society of Japan, 90, 102001 (2021) 10.7566/JPSJ.90.102001

<a id="4">[4]</a>
Beenakker, C. W. J., Kindermann, M., Marcus, C. M., & Yacoby, A.
(2004). Entanglement production in a chaotic quantum dot. In .
Kluwer. Retrieved from https://hdl.handle.net/1887/1298

<a id="5">[5]</a> 
W. K. Wootters, Entanglement of formation of an arbitrary state of two qubits, Physical Review Letters 80, 2245 (1998).

<a id="6">[6]</a>
C. H. Bennett, D. P. DiVincenzo, J. A. Smolin, and W. K. Wootters, Mixed-state entanglement and quantum error correction, Physical Review A54, 3824 (1996).

<a id="7">[7]</a>
C. W. J. Beenakker, C. Emary, M. Kindermann, and J. L. van Velsen, Proposal for Production and Detection of Entangled Electron-Hole Pairs in a Degenerate Electron Gas, Phys. Rev. Lett. 91, 147901 – Published 1 October 2003

<a id="8">[8]</a>
F. Verstraete and M. M. Wolf, Entanglement versus bell-violations and their behavior under local filtering operations, Phys. Rev. Lett.89, 170401 (2002).

<a id="9">[9]</a>
J.S. Bell On the Einstein-Poldolsky-Rosen paradox, Physics 1 195 (1964).

<a id="10">[10]</a>
Hensen, B., Bernien, H., Dréau, A. et al. Loophole-free Bell inequality violation using electron spins separated by 1.3 kilometres. Nature 526, 682–686 (2015). https://doi.org/10.1038/nature15759


