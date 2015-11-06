using namespace::std;

class Text{
	private:
	ifstream inFile;
	string tempWord;
	string tempLine;
	char tempLetter;
    int wordCount = 0;
	int lineCount = 0;
	int letterCount = 0;
	public:
	int wordcount(){
		resetposition();
		while(!inFile.eof()){               
			inFile >> tempWord; 
			wordCount++;
		}
		return wordCount-1;
	}
	
	
	int lettercount(){
		resetposition();
		while(!inFile.eof()){  
			inFile.get(tempLetter);
			if(tempLetter!=' '&&tempLetter!='\n') letterCount++;
		}
		return letterCount;
	}
	
	int linecount(){
		resetposition();
		while(!inFile.eof()&&getline(inFile,tempLine)){  
			lineCount++;
		}
		return lineCount;
		
	}
	
	int read(char fileName[]){
		inFile.open(fileName, std::ios::in);
		if (!inFile.is_open() ){
			cerr << "Error: unable to open file for input" << endl;
			return 0;
			}
		return 1;		
	}
	
	void print(){
		resetposition();
		while(!inFile.eof()){  
			inFile.get(tempLetter);
			cout<<tempLetter;
		}
		
		}
		void resetposition(){
			inFile.clear();
			inFile.seekg(0, ios::beg);
		}
};
