#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> tokenize(const string &sstring, char delimiter)
{
	size_t pos, startAt;
	pos = startAt = 0;

	vector<string> vstrings;
	string item;
	while ((pos = sstring.find(delimiter, startAt)) != string::npos)
    {
    	item = sstring.substr(startAt, pos-startAt);
    	#ifdef DEBUGAPP
    		cout << "item: " << item << endl;
    	#endif
    	vstrings.push_back(item);
    	startAt = pos+1;
    }

    #ifdef DEBUGAPP
    	cout << "item: " << sstring.substr(startAt) << endl;
    #endif

    vstrings.push_back(sstring.substr(startAt));

    return vstrings;
}
