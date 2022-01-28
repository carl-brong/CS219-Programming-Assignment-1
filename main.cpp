#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

std::string input[100];
std::string filename;
ifstream fin;

int addHex(std::string[], int); //add the hex declaration

int main(){
	//opens the file
	fin.open("Programming-Project-1.txt");
	int count = 0;
	while(fin){
		fin >> input[count];
	count++;
	}

	fin.close();
	for(int i = 0; i < count+1; i++){
		std::cout << input[i] << std::endl;
	}
	
	int i = 0;
	while(i<= count){
		if(input[i] == "ADD"){
			i = addHex(input, i);
		}
	i++;
	}
	return 0;
}

int addHex(std::string array[], int index){//designed with help from Larson Rivera
	uint32_t result = 0;
		index++;
	while(array[index][0] >= 48 && array[index][0] <= 57)/*detects values from 0 to 9*/{
		std::stringstream in;
		uint32_t operand;
			in << hex << array[index];
			in >> operand;
		result += operand;
			index++;
}

	std::cout << "Sum: 0x" << hex << result << std::endl;
	 return index-1;
}
	

