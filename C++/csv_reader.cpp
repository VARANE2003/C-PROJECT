#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	string fname;
	cout<<"Enter the file name: ";
	cin>>fname;

	vector<vector<string>> content;          //creating the vector for the whole "table"
	vector<string> row;                      // creating the vector for each row
	string line, word;                        

	fstream file (fname, ios::in);
	if(file.is_open())                      
	{
		while(getline(file, line))       //while there is a line to the file
		{
			row.clear();             //clear the row vector for the next line to be stored

			stringstream str(line);

			while(getline(str, word, ','))    
				row.push_back(word);      // extracting the words and adding them as elements to the row vector
			content.push_back(row);           //pushing each row as element to the "whole table"/content vector
		}
	}
	else
		cout<<"Could not open the file\n";

	
	//Code for printing the contents
	
	for(int i=0;i<content.size();i++) 
	{
		for(int j=0;j<content[i].size();j++)
		{
			cout<<content[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}

