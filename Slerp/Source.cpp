#include <math.h>
#include <iostream> 
#include <vector>
using namespace std;

vector<float> Slerp(const vector<float>& first, const vector<float>& second, float num);
int main()
{
	vector<float> a = { 0.0f, 0.0f, 1.0f, 0.0f };
	vector<float> b = { 0.0f, 1.0f, 0.0f, 0.0f };
	vector<float> c = Slerp(a, b, 0.25f);
	vector<float> d = Slerp(a, b, 0.5f);
	vector<float> e = Slerp(a, b, 0.75f);
	cout << "Slerp (a, b, 0.25)=" << c[0] << " + " << c[1] << "i + " << c[2] << "j + " << c[3] << "k";
	cout << "Slerp (a, b, 0.5)=" << d[0] << " + " << d[1] << "i + " << d[2] << "j + " << d[3] << "k";
	cout << "Slerp (a, b, 0.75)=" << e[0] << " + " << e[1] << "i + " << e[2] << "j + " << e[3] << "k";
	return 0;
}

vector<float> Slerp(const vector<float>& first, const vector<float>& second, float num)
{
	vector<float> retVec;
	
	return retVec;
}