/*Change Fillvector.cpp so that it prints the lines (backwards) form last to first*/

//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <iostream>
//
//using namespace std;
//
//void main5() {
//	ifstream f("03.txt");
//	vector<string> v;
//	string word;
//	while (f >> word) {
//		v.push_back(word);
//	}
//	for (int i = v.size() - 1; i >= 0; i--)
//	{
//		cout << v[i] << " ";
//	}
//}


//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ifstream in("03.txt");
//	string word;
//	vector<string> v;
//	while (getline(in, word)) {
//		v.push_back(word);
//	}
//	while (!v.empty()) {
//		string temp = v.back();
//		v.pop_back();
//		cout << temp << endl;
//	}
//}