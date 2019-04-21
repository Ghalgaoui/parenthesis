//============================================================================
// Name        : Sequence_paretheses.cpp
// Author      : kamel
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include <stack>


using namespace std;


class Answer {
public:
	static bool check(string seq){
		string parentheses = "()";
		string accolades = "[]";
//		if(seq.size()%2 != 0)
//			return false;
		if(seq.empty())
			return true;
		if(seq == parentheses || seq == accolades ||
		   seq == parentheses + accolades || seq == accolades + parentheses
		   || seq == parentheses + parentheses || seq == accolades + accolades){
			cout << seq << endl;
			return true;
		} else {
			if((seq[0] == '(' && seq[seq.size() - 1] == ')')
					|| (seq[0] == '[' && seq[seq.size() - 1] == ']')){
				seq.erase(seq.begin());
				seq.pop_back();
				check(seq);
			} else {
				return false;
			}
		}
	}
};

int main() {

	cout << "Answer1 = "<< Answer::check("([()])") << endl;
	if (Answer::check("([()])"))
		cout << "true" << endl;
	cout << "Answer2 = "<< Answer::check("(()[])") << endl;
	cout << "Answer3 = "<< Answer::check("[][]") << endl;
	cout << "Answer4 = "<< Answer::check("([)]") << endl;
	cout << "Answer5 = "<< Answer::check("((") << endl;
	cout << "Answer6 = "<< Answer::check("[(())][[[[]]]]") << endl;
	return 0;
}
