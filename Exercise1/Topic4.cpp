/*Creat a program that counts the occurrence of a particular word in a file(use the 
string-class'operator '==' to find the word)*/

//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void main4() {
//	ifstream in("04.txt");
//	string word;
//	cout << "Please enturn a particular word : ";
//	string parword;
//	cin >> parword;
//	int number = 0;
//	while (in >> word) {
//		if (word == parword)
//		{
//			number++;
//		}
//	}
//	cout << "File has "<< number <<" particular word." << endl;
//}

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string parword = "one";
//	int number = 0;
//	ifstream in("04.txt");
//	string word;
//	while (in >> word) {
//		if (word == parword) {
//			number++;
//		}
//	}
//	cout << number << endl;
//}