#pragma once
#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
class Cambio
{
public:
	vector<int> v;
	vector<int> v1;
	void backtraking(int cantidad, int cambio[], int n, int indice);
};