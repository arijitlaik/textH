#include <iostream>
#include <fstream>
#include <string>
#include "Text.h"
int main()
{	
	Text txt;
	txt.read("test.txt");
	
	txt.print();
	cout<<txt.linecount()<<endl<<txt.lettercount()<<endl<<txt.wordcount();
	
}

