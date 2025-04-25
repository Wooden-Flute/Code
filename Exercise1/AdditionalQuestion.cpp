//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void main1() {
//	vector<string> v;
//	string word;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "Pleast enter a word or a serence : ";
//		cin >> word;
//		v.push_back(word);
//	}
//	ofstream f1("1.txt");
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		f1 << v[i] << endl;
//	}
//	f1.close();
//
//	ifstream f("1.txt");
//	ofstream f2("2.txt");
//	string words;
//	while (f >> words) {
//		f2 << words << endl;
//	}
//	f.close();
//	f2.close();
//
//	ifstream file("2.txt");
//	while (file >> words) {
//		cout << words << endl;
//	}
//	file.close();
//}


//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	string word;
//	vector<string> v;
//	for (int i = 0; i < 5; i++) {
//		getline(cin, word);
//		v.push_back(word);
//	}
//	ofstream out("1.txt");
//	for (int i = 0; i < v.size(); i++) {
//		out << v[i];
//		out << endl;
//	}
//	out.close();
//
//	ifstream f1("1.txt");
//	ofstream f2("2.txt");
//
//	string setence;
//	while (getline(f1, setence)) {
//		f2 << setence << endl;
//	}
//	f1.close();
//	f2.close();
//
//	ifstream in("2.txt");
//	while (getline(in, word)) {
//		cout << word << endl;
//	}
//}