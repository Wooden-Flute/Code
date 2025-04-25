/*Display a file a line at a time,waiting for the user to press the "Enter" key after each time*/

//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//void main7() {
//	ifstream f("03.txt");
//	string word;
//	vector<string> v;
//	while (getline(f, word)) {
//		v.push_back(word);
//	}
//	int i = 0;
//	while (i < v.size())
//	{
//		cout << "The Number." << i << " : ";
//		cout << v[i] << endl;
//		char key;
//		key = cin.get();
//		if (key == '\n')
//		{
//			i++;
//		}
//		else {
//			break;
//		}
//	}
//}


//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ifstream in("03.txt");
//	string word;
//	while (getline(in,word)) {
//		cout << word << endl;
//		cout << "Press Enter to continue...";
//		string e;
//		e = cin.get();
//		if (e != "\n")
//		{
//			break;
//		}
//	}
//}