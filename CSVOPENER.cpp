/*

// C++ program to demonstrate getline() function   --> "importing from cin with getline"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Please enter your name: \n";
    getline(cin, str);
    cout << "Hello, " << str
         << "!\n";

    return 0;
}
*/


/*

// C++ program to understand the use of getline() function  -->   stringstream + getline

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;

    getline(cin, S);

    stringstream X(S);

    while (getline(X, T, ' ')) {
        cout << T << endl;
    }

    return 0;
}



*/






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

	vector<vector<string>> content;
	vector<string> row;
	string line, word;

	fstream file (fname, ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();

			stringstream str(line);

			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else
		cout<<"Could not open the file\n";

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











