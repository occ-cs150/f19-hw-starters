/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <string>
#include <iostream>
#include <memory>
using namespace std;

string STUDENT = "sgilbert"; //"WHO AM I?"; // Add your Canvas/occ-email ID

#include "h27.h"

FlexArray& readData(istream& in, FlexArray& a)
{
    // If there is already any data then free it
    a.size_ = 0;
	size_t capacity = 2;
	a.data_.reset(new int[capacity]);

	int num;
	while (in >> num)
	{
		if (a.size_ >= capacity)
		{
			capacity *= 2;
			unique_ptr<int[]> tmp{new int[capacity]};
			for (size_t i = 0; i < a.size_; i++)
				tmp[i] = a.data_[i];
			a.data_.reset(tmp.release());
		}
		a.data_[a.size_] = num;
		a.size_++;
	}

	unique_ptr<int[]> temp(new int[a.size_]);
	for (size_t i = 0; i < a.size_; i++)
		temp[i] = a.data_[i];

    a.data_.reset(temp.release());

    return a;
}

string toString(const FlexArray& a)
{
    string result = "{";
    if (a.size_ > 0)
    {
        result += to_string(a.data_[0]);
        for (size_t i = 1; i < a.size_; i++)
            result += ", " + to_string(a.data_[i]);
    }
    return result + "}";
}

//////////////////////// STUDENT TESTING //////////////////////////
#include <iostream>
#include <sstream>
int run()
{
    cout << "Add your own tests here" << endl;
    istringstream in("8 9 Q 4 5");
    FlexArray a;
    in >> a;
    cout << "a->" << a << endl;
    return 0;
}