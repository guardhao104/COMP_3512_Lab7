#include <iostream>
#include <vector>

using namespace std;

//Calculate the sum of the elements in the vector.
//PARAM		v is the vector<int> passed by reference
//PRE		NULL
//POST		NULL
//RETURN	the sum of the elements in the vector 
int sum(const vector<int>& v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		sum += v[i];
	}
	return sum;
}

//Find the maximum value of the elements in the vector.
//PARAM		v is the vector<int> passed by reference
//PRE		v should have at least one element
//POST		NULL
//RETURN	the maximum value of the elements in the vector 
int max(const vector<int>& v)
{
	int max = v[0];
	for (int i = 0; i < v.size(); ++i)
	{
		if (max < v[i])
			max = v[i];
	}
	return max;
}

//Find the minimum value of the elements in the vector.
//PARAM		v is the vector<int> passed by reference
//PRE		v should have at least one element
//POST		NULL
//RETURN	the minimum value of the elements in the vector 
int min(const vector<int>& v)
{
	int min = v[0];
	for (int i = 0; i < v.size(); ++i)
	{
		if (min > v[i])
			min = v[i];
	}
	return min;
}

//Calculate the average of the elements in the vector.
//PARAM		v is the vector<int> passed by reference
//PRE		v should have at least one element
//POST		NULL
//RETURN	the average of the elements in the vector 
double average(const vector<int>& v)
{
	double sum = 0.0;
	for (int i = 0; i < v.size(); ++i)
	{
		sum += v[i];
	}
	return sum / v.size();
}

int main()
{
	vector<int> v = { 4, 12, 3, 2, 17, 10, 7 };
	cout << sum(v) << endl;
	cout << max(v) << endl;
	cout << min(v) << endl;
	cout << average(v) << endl;
	system("pause");
	return 0;
}