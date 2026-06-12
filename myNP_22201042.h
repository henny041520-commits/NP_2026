/*----------------------------------------------------------------\
@ C-Tutorial by Young-Keun Kim - Handong Global University

Author           : SSS LAB
Created          : 05-03-2021
Modified         : 08-19-2022
Language/ver     : C++ in MSVS2022

Description      : myNP_tutorial.h
/----------------------------------------------------------------*/

#ifndef		_MY_NP_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NP_H
#define		PI		3.14159265358979323846264338327950288419716939937510582

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myMatrix_22201042.h"

extern double factorial(double _x);
extern double power(double _x, int N);
extern void printVec(double* vec, int row);


//  Taylor series approximation for sin(x) (input unit: [rad])
extern double sinTaylor(double _x);
extern double cosTaylor(double _x);
// Taylor series approximation for sin(x) (input unit: [deg])
extern double sindTaylor(double _x);
extern double cosdTaylor(double _x);
double bisection(double fuc(double x), float _a0, float _b0, float _tol);
double newtonRaphson(double func(double x), double dfunc(double x), double _x0, double _tol);
void gradient1D(double dydt[], double _t[], double _y[], int m);
void gradientFunc(double dydt[], double _t[],  double func(const double x), int m);
void acceleration(double dy2dx2[], double x[], double y[], int m);
void accelerationfunc(double dy2dx2[], double x[], double func(const double x), int m);
double simpson(double x[], double y[], int m);
double integral(double func(const double x), double a, double b, int n);
void  LUdecomp(Matrix L, Matrix U, Matrix A);
Matrix fwdsub(Matrix L, Matrix b);
Matrix backsub(Matrix U, Matrix y);
Matrix solveLinear(Matrix A, Matrix b);
Matrix GausElimination(Matrix A, Matrix b);
void LUdecomp_piv(Matrix L, Matrix U, Matrix P, Matrix A);
Matrix solveLinear_piv(Matrix A, Matrix b);
double normVec(Matrix v);
void QRdecomp(Matrix Q, Matrix R, Matrix _A);
Matrix eigvec(Matrix _A);
Matrix eigval(Matrix _A);
void eig(Matrix V, Matrix D, Matrix _A);
void odeEU(double y[], double odeFunc(const double t, const double y), const double t0, const double tf, const double h, const double y_init);



void odeRK2(double y[], double odeFunc(const double t, const double y), const double t0, const double tf, const double h, const double y_init);



void odeRK3(double y[], double odeFunc(const double t, const double y), const double t0, const double tf, const double h, const double y0);


// ODE RK2 for 2nd order ODE 
void sys2RK2(double y1[], double y2[], void odeFuncSys(double dYdt[], const double t, const double Y[]), const double t0, const double tf, const double h, const double y1_init, const double y2_init)
;
/*
void linearRegression(double z_opt[], double xdata[], double ydata[], int dataN);


// [YOUR COMMENT GOES HERE]
void expRegression(double z_opt[], double xdata[], double ydata[], int dataN);
*/


/*
double myLossEx1(Matrix Z, Matrix X, Matrix Y);


Matrix myLossGradEx1(Matrix Z, Matrix X, Matrix Y);
*/

#endif