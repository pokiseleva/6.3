#include <cmath>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <iterator>
#include <iomanip>
#include <fstream>
using namespace std;

	string find(map<string, string> a, string s3) 
	{
		stringstream ss;
		string s1;
		string s2;

		for (auto elem:a)
		{
			s1=elem.first;
			s2=elem.second; 
			a[s1] = s2;
			a[s2] = s1;
			
		}
		ss << a[s3];
		return ss.str();
	}


	int main() {
		int n;
		map<string, string> a;
		ifstream in;
		in.open("test.txt");
		in >> n;
		for (int i = 0; i < n; i++)
		{
			string s1, s2;
			in >> s1 >> s2;
			a.emplace(s1, s2);

		}
		string word;
		in >> word;
		cout << find(a, word);

	}
